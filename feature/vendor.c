// vendor.c
// �ĳ��Զ���Ӧ�ִ�
// �ĳ��Զ�����Ǯ
// ������Ӣ��ģʽ����, rewrite by wade 1/4/1996
// ��ͬ��������һ������, hmm....�̵��ƺ�Ҳ����һ����...

#include <room.h>
inherit NPC;

// ���Ǹ� buy �����õ�, ֻ�Ǵ�����Ʒ��ֵ, ���滹����һ��
int sell_object(object me, string what)
{
  object	ob;
  string	*goods;
  int		g, n, s, i, j;

  // �ҳ���Ʒ��ֵ
  goods = query("vendor_goods");

  if (sscanf (what, "%d %s", n, what) != 2) n = 1;
  if (n > 40) return notify_fail("��ͬ����Ʒ���һ��ֻ����40��!!!\n");

  // ��Ȼ, û������Ͳ��ؼ���������
  if (!pointerp(goods) || sizeof(goods) == 0) return
	notify_fail ("�Է�����û��������, �������?\n"); 

  for (g=0; g<sizeof(goods); g++)
    if (goods[g]->id(what))
      break;

  if (g == sizeof(goods)) return notify_fail ("��Ǹ, û�ⶫ��\n");

  s = goods[g]->query("value") * n;

  if ( s > 0 && me->can_afford(s) ) {
    me->pay_money(s);

    j = me->query("int")-10;
    for (i=s=0; i<n; i++)
	s += 10+random(j);
    me->improve_skill("trade",s);
    if ( me->query_skill("trade") > 50 )
	me->set_skill("trade",100);

    if( goods[g]->query_amount() > 0 )
    {
    	ob = new(goods[g]);
    	ob->set_amount(n);
    	ob->move(me);
    }
    else
      for (i=0; i<n; i++) {
      	ob = new(goods[g]);
    	ob->move(me);
      }
    message_vision ("$N��$n����"+chinese_number(n)+ob->query("unit") + ob->name() + "��\n",
      me, this_object() );
    
    return 1;
  }
  else
    return notify_fail("���Ǯ������\n");
}

string price_string(int v)
{
  if( v%10000 == 0 )
    return (v/10000) + "���ƽ�";
  if( v%100 == 0 )
    return (v/100) + "������";
  return v + "��Ǯ";
}

// ���Ǹ� list �����õ�
int do_vendor_list(string arg)
{
  string *goods;
  int i;

  // û������?
  if( !pointerp(goods = query("vendor_goods")) ) return 0;
  write ("�����Թ���������Щ����:\n");
  for(i=0; i<sizeof(goods); i++)
    printf("%-65s��%s\n",
      goods[i]->short(),
      price_string(goods[i]->query("value")) );
  return 1;  
}

void init()
{
  ::init();
  this_object()->set("class","officer");
  this_object()->set("officer_type","food");
// for /daemon/class/officer/cmds/command
  add_action ("do_vendor_list", "list");
}
