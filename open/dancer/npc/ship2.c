// /open/dancer/npc/ship2.c
#include "/open/open.h"
inherit NPC;
int time=0;
void create()
{
	set_name("������", ({ "ship" }) );
	
	set("long", @LONG
��������Ů����ͼ��������, ��������ǧ����ľ��݊�ƶ���,
�ǵ��񾩳��׸�����˫����õ�����, ֻΪ�ܹ�����һ����������
���ɵļ���. ���ż��������������κ��;�, ��ͨ�������õ���
�����������.
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
  say("ǰ�����µ��Ķɴ����� , ��Ͽ��(board)�� !\n");
 }
 if(time==11)
 {
 say("������ , û���ϵ����´����� !\n");
 destruct(this_object());
 }
} 

int do_look(string str)
{
	if(str=="ship")
	{
	write("��������Ů����ͼ��������, ��������ǧ����ľ��݊�ƶ���,
�ǵ��񾩳��׸�����˫����õ�����, ֻΪ�ܹ�����һ����������
���ɵļ���. ���ż��������������κ��;�, ��ͨ�������õ���
�����������.\n");
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
