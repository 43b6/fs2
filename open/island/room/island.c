inherit ROOM;

void create()
{  
   
   set("short","���ɸ۶ɿ�");
   set ("long", @LONG
������ǰ����һ���޼ʵ�ɳ̲������ɫ��պ��
һ���߲ʵĺ磬���ܵľ�ɫ������ԭ���Ѽ���������
�����滨��ݣ��ڰ�ɫ��ӨӨɳ�����Եø��������
�ҷ���                     
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 4 */
  
    "east" : "/open/island/room/i1",
  "southeast" : "/open/island/room/i5",
]));
   set("outdoors", "/open/main");

 setup();
}
 init()
{
       add_action("board_ship","board");
        do_start_ship();

}
void do_start_ship()
{
        object ob1;
        if(!find_object("boat man"))
        {
        ob1=new("/open/island/npc/bman1");
         ob1->move("/open/island/room/boat1");
        destruct(ob1);
        }
} 
int board_ship(string str)
{
object ob;
        if(!str)
        return notify_fail("��Ҫ��ʲô?\n");
        if(!objectp(ob=present(str,environment(this_player()))))
        return notify_fail("������� , �����ִ��� ?\n");
        if(str=="boat") 
        {
        message_vision("$N�ߵ����� , ������С�� !\n",this_player());
        this_player()->move("/open/island/room/boat1");
        return 1;
        }

return 0;
}



