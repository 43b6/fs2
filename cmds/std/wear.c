 
// wear.c
 
#include <ansi.h>
 
inherit F_CLEAN_UP;
 
int do_wear(object me, object ob);
 
int main(object me, string arg)
{
        object ob, *inv;
        int i, count;
 
        if( !arg ) return notify_fail("��Ҫ����ʲô��\n");
        arg = lower_case(arg);
 
        if(arg=="all") {
                inv = all_inventory(me);
                for(count=0, i=0; i<sizeof(inv); i++) {
                        if( inv[i]->query("equipped") ) continue;
                        if(do_wear(me, inv[i]) ) count ++;
                }
                write("Ok.\n");
                return 1;
        }
 
        if( !objectp(ob = present(arg, me)) )
                return notify_fail("������û������������\n");
 
        if( ob->query("equipped") )
                return notify_fail("���Ѿ�װ�����ˡ�\n");
 
        return do_wear(me, ob);
}
 
int do_wear(object me, object ob)
{
        string str, gender;
 
        if( me->query("race") == "����" &&
            (gender=ob->query("gender_only")) &&
            gender != (string)me->query("gender") )
        {
          if (gender == "Ů��")
                return notify_fail("����Ů�˵�����������Ϊ����Ҳ�봩����Ҳ���ߣ�
\n");
          else
                return notify_fail("�������˵�����������ΪŮ��Ҳ�봩����Ҳ���ߣ�
\n");
        }
 
        if( ob->wear() ) {
                if( !stringp(str = ob->query("wear_msg")) )
                        switch( ob->query("armor_type") ) {
                                case "cloth":
                                case "armor":
                                case "boots":
                                        str = YEL "$N����һ" + ob->query("unit")
 + "$n��\n" NOR;
                                        break;
                                case "head":
                                case "neck":
                                case "wrists":
                                case "finger":
                                case "hands":
                                        str = YEL "$N����һ" + ob->query("unit")
 + "$n��\n" NOR;
                                        break;
                                case "waist":
                                        str = YEL "$N��һ" + ob->query("unit") +
 "$n�������䡣\n" NOR;
                                        break;
                                default:
                                        str = YEL "$Nװ��$n��\n" NOR;
                        }
                if( me->is_fighting() && userp(me) ) me->start_busy(1);
                message_vision(str, me, ob);
                return 1;
        } else
                return 0;
}
 
int help(object me)
{
        write(@HELP
ָ���ʽ : wear <װ������>
ָ��˵�� : 
           ���ָ������װ��ĳ�����ߡ�
�����ο� :
           remove��wield��unwield
HELP
    );
    return 1;
}
