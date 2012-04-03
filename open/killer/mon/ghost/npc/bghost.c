#include <ansi.h>

//inherit F_GUILDCMDS;
inherit NPC;

object ghost= this_object();

void do_meeting( object me)
{
   string str;
   object where;
   if( !me->query_temp("ghost") && me->query("class") == "killer" && !ghost->query_temp("followed"))
   {
      message_vision("[1;37mֻ����ǰ�׹�һ��, һ����������ʵ��������$N���ڡ�\n[0m", me);
      command("say ����ȥ�������鳤�ܰ˲���ԩ��...");
      command("follow "+ me->query("id"));
      ghost->set_temp("followed", me);
      me->set_temp("ghost", 1);
   }
   // ������ follow �����Ǹ����ֲ��ڵĻ�...
   else if( ghost->query_temp("followed") && !present( (ghost->query_temp("followed"))->query("id"), environment( ghost)))
   {
      where= environment( ghost->query_temp("followed"));
      str=file_name( where);
      ghost->move( str);
   }
   return;
}
void create()
{
        object ob;
        set_name("��ӯӯ",({"ljen"}));
        set("long","һλ����������ɱ��, ���������һλ������Ů��\n");
        set("gender","Ů��");
        set("combat_exp",300000);
        set("attitude","heroism");
        set("age",18);
        set("str", 30);
        set("cor", 30);
        set("cps", 30);
        set("per", 30);
        set("spi", 30);
        set("int", 30);
        set("force", 2000);
        set("max_force", 2000);
        set("kee", 1000);
        set("max_kee", 1000);
        set("force_factor",10);

        set_skill("move",60);
        set_skill("force",70);
        set_skill("dodge",80);
        set_skill("parry",60);
        set_skill("throwing",70);

        set_skill("blackforce",60);
        set_skill("ghost-steps",70);
        set_skill("rain-throwing",70);

        map_skill("force","blackforce");
        map_skill("dodge","ghost-steps");
        map_skill("throwing", "rain-throwing");

        set_temp("invis",1);

        set("chat_chance", 8);
        set("chat_msg", ({
"��ӯӯ˵��:�������ĺòҨ�....��\n",
"��ӯӯ˵��:��ֻ���ܰ˲�����������ԩ����\n",
"��ӯӯ˵��:��˭�ܰ��ұ���...��\n",
"��ӯӯ˵��:���ѵ�˵�˳�������Ҳ��һ�ִ�����?��\n",
"��ӯӯ˵��:��˭�ܰ��ұ��ô���, ��Ը����������...��\n",
        }));

        setup();
        ob=carry_object("/open/killer/obj/hate_knife");
        ob->set_amount(200);
        ob->wield();
}

void init ()
{
   object me= this_player();
   if( !me->query_temp("ghost"))
      call_out("do_meeting",1,me);
   add_action("do_waveto", "waveto");
   add_action("do_waveto", "wa");
}

int do_waveto(string arg)
{ 
    mixed count;
    int money,i,gmove;
    object me,roomm;
    object ghost;
    string room="";
    me = this_player();
    ghost= this_object();
    if( me->query_temp("unconcious") )          return 0;
    if( me->is_fighting() )
        return notify_fail("ս�����޷�ʹ�û����ȡ�\n");
    if( me->query_temp("������") )
        return notify_fail("�������޷�ʹ�û����ȡ�\n");
    if( environment(me)->query("no_transmit") )
    {
       write("ͻȻһ�������ӵص׷���,��ɢ�����������ƶ�,\n");
       write("�ƺ�����Ĵ���Ը�˵ؿ��Դ���...\n");
       return 1;
    }  
    money = me->query("bank/coin");
    if( money < 500)
    {
       write(" ������˵: ��Ĵ���,�޷�֧������.\n");
       return 1;
    }
    message_vision( HIB+"ֻ�����Ͻ���һ����¤����$N\n"+NOR ,me);   
    switch(arg)
    {
       case "1":
         room="/open/capital/room/r70";         break;
       case "2":
         room="/open/gsword/room/su3";          break;
       case "3":
         room="/open/ping/room/road4";          break;
       case "4":
         room="/open/center/room/inn";          break;
       case "5":
         room="/open/start/room/s5";            break;
       case "10":
         room="/open/port/room/r3-1";           break;   
       case "6":
         room = me->query("startroom");         break;
       case "7":
         room = me->query_temp("fan/7");        break;
       case "8":
         room = me->query_temp("fan/8");        break;
       case "9":
         room = me->query_temp("fan/9");        break;
       default:
     }
     gmove = me->query_temp("gmove");
     if( gmove )
     {
       roomm = environment(this_player());
     }

     // ��� room �Ƿ����, gmove on|off ������,�ʷŴ�
     if( !me->move(room) )
     {
        write(" ������˵: �޴˵ص�...\n");
        return 1;
     }
     else
        ghost->move( room);
     
   if( gmove )
   {
     count = all_inventory( roomm );
     for( i=0;i < sizeof( count ) ;i++)
     {
       if( count[i]->is_character() &&
       ( count[i]->query_temp("id") == me->query("id")
          || count[i]->query_leader() == me ) )
             count[i]->move(room);
     }
   }
     
/*    no_transmit һ���޷� fanset,��һ���޷�����,�˴����� ...ccat...9_12.96 
      if( environment(me)->query("no_transmit") ) {
        message_vision(HIB+"ͻȻһ�������ӵص׷���,��$N���ƶ䵯�ߡ�\n"+NOR,me);
        me->move("/open/common/room/inn");
     }
     else
 */    
     if( gmove )
     {
        message_vision(HIB+"һ��������,$N�����Ҵ������.\n"+NOR,me);
     }else
        message_vision(HIB+"һ��������,$N�������.\n"+NOR,me);

     me->set("bank/coin",money-500);
     return 1;
}

