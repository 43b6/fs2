// /open/center/npc/vendor.c
#include "/open/open.h"
inherit NPC;
int time=0;
void create()
{
	set_name("��ڤħ��",({"vessel"}));
	
	set("long", @LONG
��ͷһ������­ͷ , ���p����ɭɭ�� , ��Ϊ�ֲ� !
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
   say("ǰ��ڤħ���Ĵ����� , ��Ͽ��(board)�� !\n");
 }
 if(time==11)
 {
 say("������ , û���ϵ��˵���һ��� !\n");
 destruct(this_object());
 }
} 

int do_look(string str)
{
	if(str=="vessel")
	{
	write("һ�p����ɭɭ��ħ�� , �е��ľ�����ȥ�� !\n");
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
