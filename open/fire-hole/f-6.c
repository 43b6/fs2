#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", "[31m[1m�����ý�[0m[1m--[33m��ɫ���[0m");
  set ("long", @LONG
�����˵�, ��������̽��̽, ����Ļ������ղ��㿴���ĵط���̫һ��
. ���ϻ���������ι�״��ͼ��, �����ص���, �Ϸ�����һ����ɫ��â����
������, �㲻���е�����, ����˵ĵط��������Ƽ���ľ���, �������
�۽硣
LONG);

  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 4 */
  "northeast" : __DIR__"f-4.c",
  "west" : __DIR__"f-14.c",
  "southwest" : __DIR__"f-16.c",
  "east" : __DIR__"f-21.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/fire-hole/npc/dragon-y.c" : 1,
]));

  setup();
}
