//open/prayer/room/horse2

#include <ansi.h>
inherit ROOM;

void create ()
{
  set ("short", "��");
  set ("long", @LONG

	    ���Ŀ�����ר������������ʦ�ģ�����
	��ȥ����һЩ�����Ŀ���������������Բ�
	������ԭ����ƥ��

LONG);
  set("outdoors", "/open/prayer/room");
  set("exits", ([ /* sizeof() ==  2*/
	"south" : "/open/prayer/room/horse3",		//`��
	"west" : "/open/prayer/room/horse5",		//`��
    //  "north" : "/open/killer/home/sdr1",
]));

  setup();
}
 
