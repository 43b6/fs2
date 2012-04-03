inherit COMBINED_ITEM;
void create()
{
        set_name("千年灵芝", ({"thousand item","item"}) );
        set("long",
"生长在白长山上的灵芝，终年吸取长白山上的天地日\n"+
"月精华，生长而成。若经由高明的医生精心调配，将\n"+
"可配得珍贵的药丸。\n");
        set("unit", "棵");
        set("base_unit", "棵");
        set("value",1250000);
        set("base_weight", 50);
        set_amount(1);
        setup();
}

void init()
{
        if( this_player()==environment() )
        {
                add_action("check_item","check");
        }       
}

int check_item(string arg)
{
     int cure;
     if( (arg=="item" || arg=="thousand item") )
     {
        object user,ob;
        user = this_player();
        if(user->query("class")!="doctor")
        return notify_fail("你职业不是医者无法药株制成药丸!!\n");
        cure = user->query_skill("cure");
        if( cure > 150)
        {
          message_vision("$N试着将千年灵芝制成药丸。\n", user);
          ob=new("/open/mon/obj/mon-pill");
          ob->move(this_player());
          ob->add_amount(10);
          add_amount(-1);
         }else
          message_vision("$N的医术太低,无法将千年灵芝制成药丸。\n", user);
        return 1; 
     }
     return 0;   
}              

