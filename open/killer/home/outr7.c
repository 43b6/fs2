#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "��·");
  set ("long", @LONG
   ������ɱ����ϰ����ͨ�����ǳ��ı�ֱ��·����������ľ��
   ��·������̳��Χǽ����ֱ������ϰ����ȥ��
   �����쵽��ϰ���ˣ���Ϊǰ���Ѿ���������Ĵ�ɱ�������㲻���������͡���

LONG);

  set("outdoors", "/open/main");
  set("exits", ([ /* sizeof() == 4 */
      "west" : __DIR__"outr6.c",
      "east" : __DIR__"outr8.c",
]));
  setup();
}