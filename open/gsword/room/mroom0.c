#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "��ɽ����");
  set ("long", @LONG
    ��,�ڴ�ͣ��,���������һ˿����ļž�,һ�㵭�����������ɢ,
һ�����(pine)�εض���,ӭ����������,������������Զ����ʫ,
    ʫԻ:
[36m       
       ��ɽ������ɽ��,�쬺��������,  ƬƬ��������T,�׷׵���͸��̨,
       �����˼ʷ���α,��ʯ�Ӵ˾���̥,  �����޳���˽�,��ʬնȥ���ƿ�.
[2;37;0m                     
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "pine" : "�㷢�ֹ��������˿���:
��ɽ����������,������˱仯ǧ.
�ɽ����������,��Цһ��Ծ(fly up)����.
",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/mob/swboy0" : 1,
]));

  set("light_up", 1);

  set("outdoors", "/open/gsword/room");

  set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/gsword/room/mroom3",
  "east" : "/open/gsword/room/lake0.c",
]));

  setup();
}

void init()
{
	add_action("fly_up","fly");
}

int fly_up(string arg)
{
	if(arg!="up" ){
		return 0;}
	message_vision( "һƬ�����¤����$N....\n\n",
		this_player());
	if((string)this_player()->query("family/family_name") == "�ɽ���" ) {
		message_vision("\nֻ����һ������,$N��ʧ�������...\n", this_player());
		this_player()->move(__DIR__"mroom6.c");
	} else {
		message_vision("\nֻ��һ������,һ�ż�������$N��ͷ��....\n",
			this_player() );
	}
	return 1;
}

