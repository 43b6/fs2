// open/island/npc/boat1.c
#include "/open/open.h"
inherit NPC;
int time=0;
void create()
{
        set_name("Сľ��", ({ "boat" }) );

        set("long", @LONG
��ľ���������ķ��� ,���ӵ��������˸е�
�ޱȵ����� ,������� ,��źܿ���ܹ���
����ȥ�ĵط�...

LONG);
        set("attitude", "friendly");

        setup();
        set_heart_beat(1);
}
void init()
{
        add_action("do_look","look");
        add_action("do_look","l");
}

void heart_beat()
{
 time++;
 if(time==1)
 {
 say("ǰ������۵Ķɴ����� , ��Ͽ��(board)�� !\n");
 }
 if(time==11)
 {
 say("������ , û���ϵ����´����� !\n");
 destruct(this_object());
 }
} 

int do_look(string str)
{
        if(str=="boat")
        {
        write("��ľ���������ķ��� ,���ӵ��������˸е�
�ޱȵ����� ,������� ,��źܿ���ܹ���
����ȥ�ĵط�...

\n");
        return 1;
        }
return 0;
}
int accept_fight(object me)
{
        return notify_fail("����� , �ǲ��������� !\n");
}
int accept_kill(object me)
{
        return notify_fail("����� , �ǲ��������� !\n");
}




