#include <room.h>

 inherit ROOM;

 void create()
{

        set("short", "С��");
        set("long", @LONG
����һ��������̦��С·���ɵ��ϵĺۼ����������ƺ��������˾���
�����Եľ�ʯ������ʮ�߸ߣ������㲻������զ�࣬����С����ͷ������
һ��ʯ��������ǰ����֪Ҫ��ο�������
 
LONG
        );

        set("exits", ([
        "southeast":__DIR__"h-2.c",
        ]) );
	set("outdoors" ,"/open/gsword/room");
        
setup();

}

void init()
{
    add_action("do_enter","enter");
}

int do_enter(string str)
{
   object me = this_player();
   if( me->query("family/family_name")=="�ɽ���" && 
me->query_skill("shasword",1)==100 && me->query_skill("sha-steps",1)==100 && me->query("get_sha_sp",1))
   me->move("/open/gsword/room/h-1.c");
   return 1;
}   
