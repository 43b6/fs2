#include <room.h>
#include "/open/open.h"
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
������������������η���һ����·��������������·����ͨ��ڤ
��ħ�̵��ܵء�ڤ��ħ���������ҪС�ģ����ܵ��κ����ﶼ������
���������˶���������ⴥ���������ѱ���
LONG);

  set("light_up", 1);

  setup();
}
