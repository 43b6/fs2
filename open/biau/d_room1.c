// Room: /u/o/onion/room/d_room1.c

inherit ROOM;

void create()
{
	set("short", "С����");
	set("long", @LONG
�������������ư���� �Զ���Ķ���Ů--����������ס��С¥,��ͷ��ľ��ľ�ε�
��ͨ�ļҾ�,���еĶ������Եĺ�����,����ͷ������һ��ʵ���Ǹ����,˿��������
һ����С����ס�ĵط�.
    ��¥���߱�����������ס�ķ���.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"d_room2",
  "west" : __DIR__"d_room0",
	]));
	set("objects",(["/u/o/onion/npc/squire" : 1,]));

	setup();
}

int valid_leave(object me,string dir)
 {
        object who;
        if (dir=="up" && who=present ("squire", environment(me)))
          if(!who->query_temp("unconcious"))
          return notify_fail ("�Ů����¥��ǰ˵��:С��Ը���,�������˴�����,"
          +RANK_D->query_respect(me)+ "���Ǳ�����Ϊ�Ѱ�..\n");
        return ::valid_leave(me, dir);
 }    
  
