#include <room.h>
inherit ROOM;
void create()
{
        set("short","�����Ŵ���");
        set("long",@LONG
��������㼸���޷��������ﾹ�������ŵĴ����������ص�װ��
����ª�ļҾ��һ���ס��û��������Ψһ��ͬ���ǣ�����ʮ�ֵĸɾ���
����ɢ����ҫ�۵Ĺ�â��ͨ����ҽ���Ӷ��ڴ������������æ�Ļ�ͦ��
�ĵģ�һ�Ե�ҩͯ������ҽ��ĵ��ַ����������ʲô�����ϵ�������֢
����������ҽ���㿴���������������뷽ʽ�������z��һ�£��ƺ���̫��
�ܡ�
LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"eq_room",
        "south":__DIR__"5",          
        "east":__DIR__"1",           
        "west":__DIR__"3",          
        "enter":__DIR__"book",          
        ]) );
  set("objects", ([ /* sizeof() == 2 */
  "/open/doctor/npc/master_tor.c" : 1,
  "/open/doctor/npc/mdboy.c" : 1,
]));
  set("light_up", 1);
  set("valid_startroom", 1);

  setup();
call_other("/obj/board/doctorr_b.c",  "???");
}
int valid_leave(object me, string dir)
{
        if(me->query("class")!="doctor"&&dir=="north")
        return notify_fail("�Բ���, �����������ŵ��ӵľۻ�֮��!!\n");

        return ::valid_leave(me,dir);
}
void init()
{
    object me, ob;
    me = this_player();
    ob = new("/open/doctor/obj/b-mark");

    if(me->query("doctor/start_quest")==1
    && present("master tor",environment(me))
    && !present("book_mark",me))
{
	write("���Ӱ����������㣬˵��������Ҫ�Ķ�����Ϊ�β��պã�");
	ob->move(me);
  }
}
