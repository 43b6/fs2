inherit ROOM;
#include <ansi.h>
#include <castle.h>
void create ()
{
  set ("short", "������");
  set ("long", @LONG
�����˷��䣬��͸е�һ��ħ��Ϯ�ˣ����Ƶ�������������������
���Ƿ���ħ�������н������Ƶ����ڣ������ֵط���Խ�ã����Ͼͻ�մ
ȾԽ��ħ��������ħ�����ģ�����ȫʧ��
LONG);

  set("evil", 1);
  set("no_auc", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/yan" : 1,
]));
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room64",
//  "up" : "/open/god/sky/sky_start.c",
]));
  set("no_transmit", 1);

  setup();
}
