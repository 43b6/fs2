#include <room.h>

 inherit ROOM;

void create ()
{
  set ("short", "é��");
  set ("long", @LONG
          
  ������ɽ���Ϊ����ɨ�����ò��pé�ݣ���������ŵ�һ����Ķ����
��ʱ���������춯�صĺ������Ӵ��������һ������ͷס�ľ�Ȼ��һλһ��
�����̡�
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"rroad2",
  "enter" : __DIR__"house",
]));
  set("outdoors", "/open/gsword/room");

  setup();
}
