inherit ROOM;

void create()
{  
   
   set("short","�����ƫ��");
   set ("long", @LONG
����һ���½������ĸۿڣ���ǰ�ζ������ʱ����
�������ģ������Ѳ���Ϊ������;��������Ϊ��ԭ��ʿ
����ð�յ���㣬���˵�С���ǵ�����С����Ψһ������
                     
LONG);
   set("light_up", 1);
        set_heart_beat(1);
 set("exits", ([ /* sizeof() == 2 */
  "west" : "/open/island/room/port",
]));
  
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



