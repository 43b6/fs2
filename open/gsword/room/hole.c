#include <room.h>

 inherit ROOM;

 void create()
{
      
        set("short", "��Ѩ");
        set("long", @LONG
һ�������ݵĶ�Ѩ����ͷ���Ÿ�ʽ����ǧ��ٹֵĵ����ң����������𵹹���
��ʯ�ϣ�����һ������η��ľ�����ϸ�Ĺ۲�һ�����ܣ�����һЩҰ���ڴ�
�����⣬��Ȼ�����ұ��ϣ��ƺ��м���ȭӡ��������Ѿã������Ǻ������
LONG
        );

       set("objects",([
	"/open/gsword/mob/bat.c": 3,
       ]));
        set("exits", ([
"down":__DIR__"rroad2",
"west":__DIR__"whole",
"east":__DIR__"ehole",
"north":__DIR__"nhole"
        ]) );
setup();

}
