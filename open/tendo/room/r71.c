// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","�}��������Ϣ��");
        set("long", @LONG
����������}������ ����� ����Ϣ�ң���Ϊ��������}������
�������������˵�ʦ�֣������ر�Ϊ��׼����һ����Ϣ�ҡ����ſ�
��һ�£���������һ�Ŵ���һ��С���Ӻ�һ�Ű칫����������칫��
���������ƽ�����������ĵĵط��ˡ�
LONG);
  set("light_up",1);
set("exits", ([
	"west":__DIR__"r63",
]));
  setup();
}
