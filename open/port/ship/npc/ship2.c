// /open/center/npc/vendor.c
#include "/open/open.h"
inherit NPC;
int time=0;
void create()
{
	set_name("�ɴ�", ({ "ship" }) );
	
	set("long", @LONG
�����ھ��µ��ͷ��ָ�֮��Ķɴ� ! 
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
  say("ǰ�����ָ۵Ķɴ����� , ��Ͽ��(board)�� !\n");
 }
 if(time==11)
 {
 say("������ , û���ϵ��˵���һ��� !\n");
 destruct(this_object());
 }
} 

int do_look(string str)
{
	if(str=="ship")
	{
	write("�����ھ��µ��ͷ��ָ�֮��Ĵ�!\n");
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
