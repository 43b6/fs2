// pkla.c by konn
#include <ansi.h>
#include <pkla.h>
inherit F_CLEAN_UP;

int help(object);

int main(object me, string arg) {
        string bet, pk;
        object pker_master, pker_fighter, officer, where;
        int number,a,b;
        a=random(9)+1;

        seteuid( getuid() );
        if( !interactive(me) ) return 1;
        if( !catch(load_object(PK_START_ROOM)) ) {
            if( !(officer = find_living("pkla officer")) &&
                !(officer = find_object("pkla officer"))    )
                return notify_fail("���ܹ��ݼ�ȥ�ˡ�\n");
        } else return notify_fail("��̨��������! ������ʦ����\n");
        if( !arg ) return help(me);
        arg = lower_case(arg);
        where = environment(me);

// ��ӡ��Ŀǰ������ս�����
        if( arg == "list" ) {
            officer->doing_list(me);
            return 1;
        }

// ��ѯ��ҵ�ʤ�ܴ���
        else if( arg == "winner" ) {
            officer->doing_winner(me);
            return 1;
        }
/*
// pkla.c ���һ��looker�Ĳ���, ��ʦҲ������, ����дhelp
        else if( arg == "looker" ) {
            officer->doing_looker(me);
            return 1;
        }
*/
// ��ʦ���������µĲ���
/*
        else if( wizardp(me) )
           return notify_fail("��ʦ���ܹ��μ���̨����\n");
*/

// ��겻�ܲμ�pk����
        else if( me->is_ghost() ) 
           return notify_fail("�������ʲô?\n");

// �������ò���
	else if( arg == "query" ) {
            tell_object(me, sprintf("��Ŀǰ��ӵ�е�������%d����\n",
                            me->query("standby")));
            return 1;
        }

// Ѻ��ע
        else if(sscanf(arg,"bet %s %d", pk, number) == 2) {
           officer->doing_bet(me, pk, number);
           return 1;
        }

// ����ֵ̫�Ͳ��вμ�
        else if( me->query("combat_exp") < 20000 )
           return notify_fail("��ľ���ֵ����, ���ܲμӡ�\n");

// Ǳ��̫�Ͳ��ܲμ�
        else if( (me->query("potential") - me->query("learned_points")) < 200 )
           return notify_fail("���Ǳ�ܲ���, ���ܲμ�pk ������\n");
        else if( where->query("no_transmit",1))
         {//�ض����ܴ��͵������ܲμ�pkla,�������bug.��ȥ!!!!
           return notify_fail("��������������������ס��,���ܹ���������\n");
         }

// �������������ս��
        else if( arg == "me" ) {
           me->set_temp("pkr",a);
           officer->doing_me(me);
           return 1;
        }

// ������ҵ���ս
        else if( arg == "accept" ) {
           me->set_temp("pkr",a);
           officer->doing_accept(me);
           return 1;
        }

// ��������
        else if( arg == "end" ) {
           officer->doing_end(me);
           return 1;
        }
        else return help(me);
}

int help(object me) {
        write(@HELP

ָ���ʽ: pkla <me>|<accept>|<end>|<list>|<winner>|<bet>|<query>

pkla me       ����������, ��Ѱ�����������pk������
              ��������pkla end��
pkla accept   �������ܶԷ�����ս��
pkla end      ���ô�������ȡ��������������µ���ս
              , ����ս������, ���������Ч!
pkla list     �г����ڽ�����ս����ҡ�
pkla winner   ���Բ�ѯĿǰÿ���˵���̨ʤ�ܴ�����
pkla query    ��������ѯ��������ӵ�е�����������
pkla bet      ���Զ�����pk���������Ӯ�Ķ�ע, ����
              ����ֻ��money��
encourage     ���Ը����ܹܻ�����

    ��ʽ: pkla bet <���> <����> 

    ע��: ��Ӯ��һ�ٳ�����̨��, �������ܹܻ�ȡ��
	  ��, ��encourage �Ϳɻ���, �����ǡ�����
	  һ��

HELP);
        return 1;
}
