// ���� by babe

#include <ansi.h>

inherit F_CLEAN_UP;

int main( object me, string arg )
{
        object obj, old_target;

        seteuid(getuid());
        if(!arg || !objectp(obj = present(lower_case(arg), environment(me))))
                return notify_fail("�����˭�ϴ���\n");
        arg = lower_case(arg);

        if( !obj->is_character() )
                return notify_fail("�����һ�㣬�ǲ��������\n");

        if( me->query("gin",) < 140 )
                return notify_fail("������������Ϸ�ร�\n");

        if( me->query("combat_exp") < 50000 )
                return notify_fail("�㽭���������㡣\n");

        if( obj->is_fighting() || me->is_fighting() )
		return notify_fail( "��ս��������, �������?\n" );

        if( !living(obj) )
                return notify_fail(obj->name() + "�Ѿ��޷������ˡ�\n");

        if(obj==me) {
		if( me->query("gender")=="����" ) {
			message_vision( HIM"$NѸ�����¿���, �ͳ��Ⱥ����Ĵ����, �����ش���ǹ����\n"NOR, me );
		}
		else {
			message_vision( HIM"$N���������ȹ��, �ó��������밴Ħ�����, ��ʼ�����س��������\n"NOR, me );
		}
		me->add("gin",-140);
		me->apply_condition("sex_poison",0);
		me->start_busy(2);
		return 1;
	}
	else if( obj->query_temp("sex",1)) {
                 write( HIM"�㽫"+obj->name()+"�����§ס, ��ʼһ������Ĳ��ࡣ\n"NOR );
                 tell_object( obj, HIM + me->name() + "����§ס, ����̤��һ�������̼����ó̡�\n"NOR );
                 message_vision( HIW + obj->name() + "��" + me->name() + "��������, ��Ҫ�����\n"NOR, me );
                 me->add("gin",-70);
                 obj->add("gin",-70);
                 me->apply_condition("sex_poison",0);
                 obj->apply_condition("sex_poison",0);
                 me->start_busy(2);
                 obj->start_busy(2);
                 me->delete_temp("sex",1);
                 obj->delete_temp("sex",1);
                 return 1;
        }

        if( userp(obj) && (object)obj->query_temp("pending/fight")!=me ) {
                message_vision("\n$N����$n˵����"
                        + RANK_D->query_self(me)
                        + me->name() + "��������"
                        + RANK_D->query_respect(obj) + "�������꣡\n\n", me, obj
);
                          me->set_temp("sex",1);
                tell_object(obj, YEL "�����Ը��ͶԷ��ϴ�������Ҳ��" + me->name
() + "("+(string)me->query("id")+")"+ "��һ�� mklove ָ�\n" NOR);
                write(YEL "���ڶԷ�������ҿ��Ƶ���������ȶԷ�ͬ����ܺ����ϴ���\n" NOR);
                return 1;
        }

        return 1;
}
int help(object me)
{
  write(@HELP
ָ���ʽ : mklove <����>
ָ��˵�� :
           ���ָ����Ϊ������������͵�ָ���Ϊ����
       Ҳ��Ϊ��������֮�еİ�����������й�Ĺܵ�������
       ��ʱ�����ָ��Ҳ���б���ô�ร� :D~~~
HELP
    );
    return 1;
}

