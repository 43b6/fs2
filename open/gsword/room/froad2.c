// Room: /d/oldpine/epath2.c

inherit ROOM;

void create()
{
	set("short", "��ľ�е�");
	set("long", @LONG
 ��������ɽС����,���ܶ��ǰ���Ĺ���,�β�ӵ�֦����
�������,ȴ����ס�����ķ�͸��,��������������,���ſݻƵ���
Ҷ,����: �ø����ݵ���ɫ���...
LONG
	);
	set("exits", ([
     "east" : __DIR__"froad3.c",
     "west" : __DIR__"froad1.c",
]));
        set("outdoors","/open/gsword");
	setup();
}
