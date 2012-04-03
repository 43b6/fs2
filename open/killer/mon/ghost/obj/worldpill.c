inherit COMBINED_ITEM;
void create()
{
        set_name("绝世丹药", ({"world pill","pill"}) );
set("long",
"此丹药将可以提升使用者，使用绝世匕首的威力，并且强化杀意魔气的威力\n"+
"看来这就是任盈盈所说的丹药，应该可以吃(eat pill).\n");
        set("unit", "盒");
        set("base_unit", "粒");
        set("no_sell",1);
        set("value",0);
        set("base_weight", 10);
set_amount(1);
setup();
}

void init()
{
  if( this_player()==environment() )
  {
    add_action("eat_pill", "eat");
  }
}

int eat_pill(string arg)
{      

   object ob,me=this_player();

   if( !arg )                      return 0;
   arg=lower_case(arg);
   if( !ob = present(arg,me) )     return 0;
   if( ob != this_object() )       return 0;
   if (me->query("class") != "killer")
   {
	me->set("kee",10);
	tell_object(me,"你吃下之后感到一阵不适  难道是中毒了!!!\n");
	ob->add_amount(-1);
	return 0;
   }
   if (me->query_temp("getpill") == 1)
   {
	   message_vision("$N吃下绝世丹药后，感到体内仿佛有一道虚幻的真力流走着.\n", me);
                  me->set("quest/worldpill",1);
	   ob->add_amount(-1);
	   return 1;
   }
    else
    {
       message_vision("$N吃下绝世丹药后，心知此药不是自己所得.心里有鬼，连大便都拉出来\n",me);
       me->set("kee",10);
      me->set("gin",10);
      me->set("sen",10);
       ob->add_amount(-1);
       return 1;
    }
}
