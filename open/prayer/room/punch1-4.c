//open/prayer/room/punch1-4 

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "ʥ�����̳");
  set ("long", @LONG

    ǿ�ҵİ�ɫӳ������������ע�⵽������һ����ľ�����Ĵ��ӣ�����
�����м��������������Ų��ٵı������ţ��������ǰ��һ���绪��
�������긾�ˣ���������һ�����ӱ��������������дʣ���������뵽��
��ü��ˡ� 

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/open/prayer/npc/literate" : 1,        	//��ʦ
]));
  set("exits", ([ /* sizeof() == 3 */
	"enter" : "/open/prayer/room/punch1-6",		//��ʦ�ķ���
	"south" : "/open/prayer/room/punch1-8",		//����
	"east" : "/open/prayer/room/punch1",		//����
]));
  set("light_up", 1);

  setup();
}
int valid_leave(object me,string dir)
{
  if(dir=="enter"&&me->query("class")!="prayer")
  return notify_fail("��ʥ���ͽ���ý���!\n");
  return ::valid_leave(me,dir);
}

