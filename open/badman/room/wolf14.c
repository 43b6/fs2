inherit ROOM;
void create()
{
   set ("short","С��");
  set ("long",@LONG
������һƬ�յ� .Ψһ����עĿ������Ҳֻ�������ˮ������ .
LONG);

  set("outdoors","/open/badman");
  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wolf12.c",
]));

  set("objects", ([ /* sizeof() == 1 */
  "/open/badman/obj/well.c" : 1,
]));
  set ("��Դ/Һ��", ([
       "����" : "ˮ",
       "����" : "��ˮ",
       "ֹ��" : 30
  ]) );

  setup();
}
