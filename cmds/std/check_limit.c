// check_limit.c ��ѯĿǰ����״�� by ACKY

#include <limit.h>
#include <ansi.h>

int help( object me );

int main( object me, string arg )
{
        string check, CO, name;
        int ratio;
        object ob;

        if( !arg )
                ob = me;
        else {
                if( !wizardp(me) )
                        return notify_fail( "ֻ����ʦ���ܲ鿴���Ŀǰ����״����\n");
                ob = present( arg, environment(me) );
                if( !ob )       ob = find_player( arg );
                if( !ob )       return notify_fail("��Ҫ�鿴˭������״��?\n");
        }

        switch( ratio = (MAX_KB-ob->query("net_count/count"))*100/MAX_KB )
        {
        case 90..100 : CO = HIG; break;
        case 80.. 89 : CO = GRN; break;
        case 60.. 79 : CO = HIY; break;
        case 40.. 59 : CO = YEL; break;
        case 20.. 39 : CO = HIR; break;
        case  0.. 19 : CO = RED+""; break;
        default      : CO = NOR;
        }

        if( ob == me )
                name = "��";
        else
                name = ob->query("name")+"("+ob->query("id")+")";

        check  = HIW"\nĿǰ"+name+"������������� - \n\n"NOR;
/*
        check+="Ŀǰ��������ͣ����\n";
        check += sprintf(HIC"\t�п�ʹ����������:%s %4d / %4d (%d%%) "NOR"��λ: KB��\n", CO, MAX_KB-ob->query("net_count/count"), MAX_KB, ratio );
        check += sprintf(HIC"\t�����»ز���ʱ��:"NOR" %s��\n\n", CHINESE_D->chinese_period( 86400-(time()-ob->query("net_count/date")) ) );
*/

        if(ob->query("cmds_cnts"))
        check += sprintf(HIY"\tĿǰһ����ָ������:%d\tĿǰ������%d��ָ�\n"NOR,
                    ob->query("cmds_cnts/max_cmds"),ob->query("cmds_cnts/cnt"));
        if(me->query("cmds_cnts/r1_time") && me->query("cmds_cnts/max_cmds") < 350)
          check+=sprintf("�´�ָ�����޼�һʱ��:%s\n",ctime(me->query("cmds_cnts/r1_time")));

        me -> start_more( check );
        return 1;
}

int help( object me )
{
        write("
        check_limit : ��ѯĿǰ�ĸ������������

");
        return 1;
}

