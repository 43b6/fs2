inherit ROOM;
#include <ansi.h>
void create()
{
set("short", "����");
set("long", @LONG
����������Ըо���ǰ��������������䵽���ϣ��������˸е�
�ڰ���������Ҳ����ϡ���ˣ������ƺ��������ֵľ�ͷ������Կ���
ǰ���и�Сɽ��
LONG
);
set("exits",([ /* sizeof() == 2*/
"down" : __DIR__"tree2.c",
"north" : __DIR__"tomb.c",
]));
set("outdoors",1);
setup();
}

