#include <ansi.h>
inherit ROOM;
 
void create ()
{
  set ("short", "�������޵�");
  set ("long", @LONG

    ����վ��ͨ�����֮�ǵıؾ�֮�أ�Ҳ�ǽ�������֮��ı���������
 -- ���޳�û��Ͽ�ȿڣ��������������ħ��֮�䳤�����ս��ʹ�����
Ԫ�����ˣ�Ҳ�������ս����󣬻����������ռ�����֮�ǣ��������̤
�����Σ���ķ������򣬵�����������׼����

LONG);

  set("objects", ([ /* sizeof() == 1 */
  "/u/s/superobs/statue.c" : 1,
]));
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"sky1",
]));

  setup();
}
