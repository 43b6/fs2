inherit ROOM;
#include <ansi.h>
void create()
{
set("short","����");
set("long",@LONG
ֻ���˵�һ��Ƭ�������֣�֦Ѿ���죬�д�ī�̣��·�����ű�
�ʣ���·������һ���ʾ��( sign )�����бٳ�һ��С����ֱ���ŷ�
��ͨȥ��
LONG);
set("exits",([ /* sizeof() == 3 */
"down" : __DIR__"bridge1.c",
"up" : __DIR__"tree2.c",
]));
set("item_desc", ([
"sign":@TEXT
             �˴���Ϊ�����ء���̤���ߺ�����и���
                                               
                                             �����
TEXT,
]) );
set("outdoors",1);
setup();

}


