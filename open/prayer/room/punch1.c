//open/prayer/room/punch1 

inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "ʥ�����̳");
	set( "build", 7 );
  set("valid_startroom",1);
  set ("long", @LONG

    �����������д�˵�ġ�ʥ�����̳��������ͷһ���Ϸ���һ�飬�ý�
�׺��ֵ����ң���ͷд��[31m��ʥ��̡�[37m�����������ܿ�������һ�����ޱ�
������ʮ��Ĺ��������֧��������������֧���ţ����ں��̺����
����������Ŀ�������һ������ں��̺�ľ�ͷ���и������������ϣ�
����һ�ֻ��߰��ѹ��������һ�ֲ��������ĸо���

LONG);
  set("objects", ([ /* sizeof() == 3 */
  "/open/prayer/npc/left1" : 1,        	//����
  "/open/prayer/npc/right1" : 1,		//����
  "/open/prayer/npc/pope" : 1,          //����
]));
  set("exits", ([ /* sizeof() == 4 */
    "up" : "/open/prayer/room/prayer_talk",
	"south" : "/open/prayer/room/punch1-2",		//����
	"east" : "/open/prayer/room/punch1-3",		//������
	"west" : "/open/prayer/room/punch1-4",		//��ʦ
]));
   set("light_up", 1);

  setup();
}
 
int valid_leave(object me, string dir)
{
if (dir == "up" && me ->query("class") != "prayer")
     return notify_fail(HIY"�ֺ���˵��:����ʥ������Ҵ�,������..\n"NOR);
     return :: valid_leave(me, dir);
}
