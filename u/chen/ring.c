// crack by bear

#include <mudlib.h>
#include <ansi.h>
#include <armor.h>
#include <command.h>

inherit EQUIP;
inherit F_SAVE;
inherit F_AUTOLOAD;
inherit F_DAMAGE;

string inputstr,verb;

void create()
{
  seteuid(getuid());
  set_name (HIY "����֮��" NOR, ({ "god ring", "ring" }));
  
	set("long",@LONG
    ����һ��������Ϊ������Ҫ�������Ľ�ָ�����������ħ����

    ����<help cloak>�Ի�ø������Ѷ��
LONG
);

  set("unit","��");
  set("no_drop", 1);

  set("material", "gem");
  set("armor_prop/armor", 100);
  set("armor_type", "finger");
  set("light",1);
  setup();
}

void init()
{
  add_action("help","help");
  add_action("full","full");
  add_action("rem","rem");
  add_action("wave","wave");
  add_action("steal","steal");
  add_action ("whereis", "whereis");
  add_action ("pk_mob", "mobpk");
  add_action ("do_give", "give");
  add_action ("do_wakeup", "wakeup");
  add_action ("force_quit", "fquit");
}

int help(string str)
{

  if (str!="ring") return 0;

write(@Help

    �����ʹ�����µļ�������:

       % localcmd, stat, call, data, score, skills, �ȵ�
         ���� help wizcmds ȡ�ý�һ������

       wave <number> <type>		<<ȡ������Ǯ�ҵĶ�����Ŀ>
       full <���>              	<ȫҽ, ��������������ڶ�Ϊ�Լ�>

Help

);

  return 1;
}

int full(string str)
{
	string *att_name= ({"gin", "kee", "sen", "mana", "force", "atman",});
  int i,max;
  
  object me;

  if(!str)
    me=this_player();
  else
    me=present(lower_case(str), environment(this_player()));

  if (!me) return notify_fail ("[ring]: full error: �Ҳ���"+str+"\n");
  
	for (i=0; i<6; i++) {
		max=me->query("max_"+att_name[i]);
    me->set("eff_"+att_name[i],max);
    me->set(att_name[i],max);		
	}
  max = me->max_food_capacity();
  me->set("food",max);
  max = me->max_water_capacity();
  me->set("water",max);
  me->clear_condition();
  me->verive();
  me->delete_busy();
  	
  if (me->is_ghost()) {
    me->reincarnate();
    me->move("/open/common/room/inn");
  }
  me->clear_condition();

  message_vision( sprintf("$N��������ظ����� [32;1m���� ���� ����ķ[37;0m  \n"),
                  this_player());
  return 1;
}

int wave (string arg)
{
        string kind;
        int amount;
        object n_money;

        if( !arg || sscanf(arg, "%d %s", amount, kind)!=2 )
          return notify_fail("[cloak]: wave <����Ǯ> <Ǯ������>\n");

        n_money = present(kind + "_money", this_player());
        if( !n_money && file_size("/obj/money/" + kind + ".c") < 0 )
                return notify_fail("��ҡ�˰���ȴʲôҲû�г�����\n");
        if( amount < 1 )
                return notify_fail("��ҡ�˰���ȴʲôҲû�г�����\n");

        if( !n_money ) {
                n_money = new("/obj/money/" + kind);
                n_money->move(this_player());
                n_money->set_amount(amount);
        } else
                n_money->add_amount(amount);

message_vision( sprintf("$Nʹ�����Ϳڴ���ͻȻ�Ӵ������ͳ�%s%s%s��\n",
                        chinese_number(amount),
                        n_money->query("base_unit"),
                        n_money->query("name")),
                this_player());
        return 1;
}
