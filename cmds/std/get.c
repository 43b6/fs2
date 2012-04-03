// get.c babe
// fix ���϶���ֻ�񲿷־ͻ���ʧ�� bug
// ���Ӽ�ʬ���֪����

#include <ansi.h>
#include <carry.h>

inherit F_CLEAN_UP;

int do_get(object me, object ob);

int main(object me, string arg)
{
  string from, item;
  object obj, *inv, env, obj2;
  int i, amount;

	seteuid(getuid());

	if (!NATURE_D->vision(me))
		write ( "����������ڵ�, ���洦������.........\n");

	if( !arg ) return notify_fail("��Ҫ����ʲô������\n");

	if( sscanf(arg, "%s from %s", arg, from)==2 ) {
		env = present(from, me);
		if(!env) env = present(from, environment(me));
    		if(!env || living(env))
      			return notify_fail("���Ҳ��� " + from + " ����������\n");
		// by acky
		if( env->is_corpse() && env->query("victim_id") ) {
			if( obj = find_player(env->query("victim_id")) )
				tell_object( obj, HIB"��ͻȻ����ֵֹĸо�, " + me->name(1) + "(" + getuid(me) + ")���������ʬ�塣\n"NOR );
		}
	}
  	else
  		env = environment(me);

	if(sscanf(arg, "%d %s", amount, item)==2) {
    		if( !objectp(obj = present(item, env)) )
      			return notify_fail("����û������������\n");
    		if( !obj->query_amount() )
      			return notify_fail( obj->name() + "���ܱ��ֿ����ߡ�\n");
    		if( amount < 1 )
      			return notify_fail("�����ĸ���������һ����\n");
    		if( amount > obj->query_amount() )
      			return notify_fail("����û����ô���" + obj->name() + "��\n");
    		else if( amount == (int)obj->query_amount() ) {
      			return do_get(me, obj);
    			}
    		else {
			obj->set_amount( (int)obj->query_amount() - amount );
			obj2 = new(base_name(obj));
			obj2->set_amount(amount);
			obj2->move( environment(me) );
			return do_get(me, obj2);
    		}
  	}

  if(arg=="all") {
    if( !env->query_max_encumbrance() )  return notify_fail("�ǲ���������\n");

    if( env->query("id")=="corpse" && env->query("killer") && wizardp(env->query("killer")) && !wizardp(me) )
      return notify_fail("��Ҫ�û�����ˡ�\n");

    inv = all_inventory(env);
    if( !sizeof(inv) )
      return notify_fail("������û���κζ�����\n");

    for(i=0; i<sizeof(inv); i++) {
  if( userp(inv[i]) || inv[i]->is_character() || inv[i]->query("no_get") )
        continue;
      do_get(me, inv[i]);
    }
    write("Ok��\n");
    return 1;
  }

  if ( !objectp(obj = present(arg, env)) )
    return notify_fail("�㸽��û������������\n");

  if( userp(obj) || living(obj) )
    return notify_fail("�㲻��������\n");

  if ( obj->query("no_get") )
    return notify_fail("��������ò�������\n");

  return do_get(me, obj);
}

int do_get(object me, object obj)
{
  object old_env;
  int equipped;
  int carry = sizeof(all_inventory(me));
  if( carry >= MAX_CARRY ) return notify_fail("�����ϵĶ���̫���ˡ�\n");

  old_env = environment(obj);

	if( obj->query("equipped") )
		equipped = 1;
	if( me->query("id")!=obj->query("boss") && obj->query("boss") )
		return notify_fail( "����Ʒֻ�б��˲����á�\n" );
	if( obj->query("id")=="degu sa" )
		return notify_fail( "������������ ooxx ��\n" );
	if( obj->move(me) ) {
		if( me->query("food") > 1 )	me->add( "food", -1 );
		if( me->is_fighting() && userp(me) ) me->start_busy(1);
		if( obj->is_character() )
			message_vision( "$N��$n���������d�ڱ��ϡ�\n", me, obj );
		else
			message_vision( sprintf("$N%sһ%s$n��\n",
				old_env==environment(me)? "����":
					(old_env->is_character() ?
						"��" + old_env->name() + "����" + (equipped? "����" : "�ѳ�"):
						"��" + old_env->name() + "���ó�" ),
						obj->query("unit")), me, obj );
		return 1;
	}
	else
		return 0;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : get <��Ʒ����> [from <������>]
ָ��˵�� :
           ���ָ��������������ϻ������ڵ�ĳ����Ʒ��
�����ο� :
           drop��give
HELP);
    return 1;
}

