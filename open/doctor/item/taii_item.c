// 为保障doctor权利..只允许给doctor..check
inherit COMBINED_ITEM;
void create()
{
        seteuid(getuid());
        set_name("太乙山青草",({"taii item","item"}) );
        set("long",
        "太乙山青草,有清肝退火之功能,适合练灵力之人食用.\n"+
        "此物须经医者(check item)炼制,方得食用.\n");
        set("unit", "棵");
        set("base_unit", "棵");
        set("no_sell",1);
        set("value",2500);
        set("base_weight", 50);
        set_amount(1);
        setup();
}
void init()
{
        if( this_player()==environment() )
        {
                add_action("check_item","check_item");
        }
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="super item") )
     {
        object user,ob;
        user = this_player();
       if(user->query("class")!="doctor")
        return notify_fail("你职业不是医者无法药株制成药丸!!\n");
        cure = user->query_skill("cure");
        cure = cure /4;
      if( cure > 14)
        {
          message_vision("$N试着将山青草制成灵丹.\n", user);
          ob=new("/open/doctor/pill/taii_pill");
          ob->move(this_player());
          ob->add_amount((int)cure);
          add_amount(-1);
        }else
          message_vision("$N的医术太低,无法将山青草制成灵丹.\n", user);
        return 1;
     }
     return 0;
}
