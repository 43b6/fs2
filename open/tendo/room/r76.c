// by borstquc
#include <ansi.h>
inherit ROOM;

void create()
{
  string long;

set("short","���η�");
        set("long", @LONG
������һ�Ŵ���һ�����Ӻ�һ���������ŵ�é�ӣ�������������
��֩��˿���ɼ�����Ѻܾ�û�йع����ˡ�ǰ����һ�ȼ�װ��������
������������һ�Ƚ���һ��ͨ����խ�š�
LONG);
set("exits", ([
        "east":__DIR__"r73",
]));
  setup();
}
