// Room: /open/ping/room/inn.c

inherit ROOM;

void create ()
{
  set ("short", "ľ�����");
  set ("long", @LONG
�������������ݵ�˽�˵���,������ݾ��ڵ��ŵ���һ��,
�����û�µĻ�,���ǲ�Ҫȥ����ƽ�ϳǵĴ󸻺�.
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"road9",
  "east" : "/open/wu/room/luroom1",
]));
  set("outdoors", "/open/wu");

  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
