#include <room.h>

 inherit ROOM;

void create ()
{
	set("short", "����");
	set("long", "����������ڲ�,�ߵ����,�㲻��������üͷ,ǰ��һ�����������·,ÿ��·���ƺ���
Σ���ķ�,���Ķ��ߺ���??�������и�����(sign),��������֪������������,ż���Ǳ���!
��ʹ��������һ���Լ��Ĵ��ͷ.
");

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/u/b/bigcat/room/ntree",
  "west" : "/u/b/bigcat/room/wtree",
  "south" : "/u/b/bigcat/room/tree",
  "east" : "/u/b/bigcat/room/etree",
]) );

  set("item_desc", ([ /* sizeof() == 1 */
  "sign" : "  ��ľ֮Ϊ��
   ˫ʿ֮Ϊ��
   һ��֮Ϊ��
",
]) );

  setup();
}
