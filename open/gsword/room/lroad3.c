#include <room.h>

 inherit ROOM;

void create ()
{
  set ("short", "����ͤ");
  set ("long", @LONG
�������ͤ��������һ�ٶ������ʷ�ˣ���Ȼ�Ͼɣ���ȴ��ʧ��״�������ȡ�
�˸�ʯ���Ϸֱ����š��졯�����󡯣����ס�����ˮ�������ء�����ɽ����
���硯�������������ƺ��������ߡ��м��һ��ʯ���Դ����������죬����
����ͤ�Ĳ�ƽ����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"lroad2",
]));
  set("outdoors", "/open/gsword/room");

  setup();
}
