// Room: /open/capital/room/CUR.c

inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
��������㼸���޷�������������ĵط�����ҽ�߹��ᣭ������
֮���ڣ������ص�װ�꣬��ª�ļҾߺ�һ���ס��û��������Ψһ��
ͬ���ǣ�����ʮ�ֵĸɾ���

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"h08",
]));

 
  set("objects", ([ /* sizeof() == 1 */
  "/open/doctor/master_ben" : 1,
]));

  set("light_up", 1);
  set("no_magic", 1);

  setup();
        call_other("/obj/board/doctor_b", "???");
}
