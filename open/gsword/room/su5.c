// Room: /open/gsword/room/su5.c

inherit ROOM;

void create()
{
	set("short", "��ʯС��");
	set("long", @LONG
������ʯС����,�����Ѳ�����������,�ߴ�Ľ�����������,ȡ��
����һ��ƽ��,�˳�,Ҳ��������ʧ��.
LONG
	);
	set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"su6",
  "east" : __DIR__"su1",
]));

/*	���ڿ��� beggar.c ���Ըɴ����Ҳ�ص�
        set("objects", ([
        "/open/gsword/mob/beggar" : 1,
        ]) );
*/
        set("outdoors","/open/gsword");
	setup();
}
