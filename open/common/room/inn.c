// Room: /open/common/room/inn.c babe Ϳѻ.. cc..

inherit ROOM;

#include <ansi.h>
void create ()
{
  set ("short", "����ռ���ڴ�");
	set( "build", 43 );
  set ("long", @LONG

��ӭ��λ��������ռ������,ϣ�������ܸ��㲻ͬ�ķ���!!! :)
��������ʹ�� help ָ��Ŷ~~~~~ :)

 �����߾��ǿ���ռ�������۹㳡��
 ����Ϊ���뼼�ܽ��Ե����۹㳡��
 ����Ϊ����������뱸�ݵ����ĵط���
 ����Ϊ�����ƶȽ��Ե���������
 ����ΪΥ������ռ��ƶȵĹ�������
 ��������Ϊ����������ʦ�����
 �������㽫����ʽ�������ռ�����硣

LONG);

set("objects", ([ /* sizeof() == 2 */    
"/obj/ballot.c":1,     
"/open/tailong/npc/quest_girl":1,
]));
  set("exits", ([ /* sizeof() == 8 */
  "northeast" :"/open/common/room/sp_room.c",
  "statue" :"/open/main/statue/cgyroom.c",
  "newhand" : "/open/newhand/newhand",
  "up" : "/open/clan/area/home/clan",
  "south" : "/open/wiz/fsroom",
  "down" : "/open/trans/room/room4",
  "east" : "/open/wiz/restore",
  "north" : "/open/wiz/fsroom2",
  "west" : "/open/wiz/skroom",
]));
  set("valid_startroom", 1);
  set("light_up", 1);
  set("no_fight", 1);
  set("no_sac", 1);
  setup();
}
// ������ pker �� sha-array �ڴ� pk....add by Daniel
// ���� search , Ϊ���� train_yard��· add by Anmy 98/5/26 
void init()
{
  add_action("do_team","team");
}
int do_team(){
   object me=this_player();
   tell_object(me, "����...��̫���˰�!��Ͼ�ɱ��ร�\n");
   return 1;
}

/*
int do_search(string str)
{
  object me;

  me=this_player();
  if( str != "hole" )
return notify_fail("��Ҫ�ڵ�����������\n");
tell_room(this_object(),"$n�ҵ�һ���ض�, ��������һ燡�\n",me);

message_vision("$n�������úõģ�һ˲��$n��Ȼ��ʧ������ǰ��\n",me,me);
  me->move("/u/a/anmy/room/train_room");
  return 1;
}
*/
