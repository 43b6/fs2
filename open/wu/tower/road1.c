// Room: /u/p/pokai/room/wu/tower0
inherit ROOM;

void create()
{
  set ("short", "����С��");
  set ("long", @LONG
����һ���ܲ����۵�С�����������Ӳݣ��Լ��������ľ��������ѷֵ�
���������ע�⵽��������ԼԼ��һ������������������Ǹ��������ҡ�
LONG);

  set("outdoors", "u");
  setup();
}
void init() {
//   add_action("do_east","east");
   add_action("do_search","search");
}
/*
int do_east(string str) {
     if(!str){
        tell_object(this_player(),"�㴩�����ԡ���\n");
        this_player()->move(__DIR__"road2");
        return 1;}
     else {
        tell_object(this_player(),"�������û�г�·��\n");
        return 1;}
}
*/

 int valid_leave( object who , string dir ) {
     if(dir == "east") { 
        tell_object(this_player(),"�㴩�����ԡ���\n");
        this_player()->move(__DIR__"road2");
        return notify_fail("");
	}
     return ::valid_leave( who , dir );
}


int do_search(string str) {
     if(str == "east"){
        tell_object(this_player(),"�㴩�����ԡ���\n");
        this_player()->move(__DIR__"road2");
        return 1;}
     else {
        tell_object(this_player(),"���ƺ��������������ҿ���\n");
        return 1;}
}
