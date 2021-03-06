#include <ansi.h>
inherit NPC;
inherit F_MASTER;
void create()
{
	object ob;
	set_name("完颜殊",({"weapon manager","manager"}));
	set("long","他看起来不像汉人，像是东北一带的人，却是黑牙联的兵器使。\n");
	set("gebder","男性");
	set("title","黑牙联兵器使");
	set("combat_exp",385872);

    set("attitude","heroism");
	set("age",30);
	set("str",40);
    set("cor", 24);
	set("cps", 18);
	set("per", 24);
	set("int", 42);
	set("force",400);
    set("max_kee",1200);
	set_skill("parry",50);
    set("max_force",800);
	set("force_factor",20);
    set_skill("force",50);
    set_skill("unarmed",60);
	set_skill("throwing",60);
	set_skill("rain-throwing",80);
	set_skill("dodge",50);
    set_skill("parry",40);
	set_skill("shade-steps",60);
	map_skill("throwing","rain-throwing");
	map_skill("dodge","shade-steps");
        map_skill("parry","rain-throwing");
	set_skill("blackforce",30);
	map_skill("force","blackforce");
    set("list",([
        "飞刀": ([
                "local":"/open/killer/obj/knife",
                  "amount":9000,
                "id":"knife",
                ]),
        "花针": ([
                "local":"/open/killer/obj/needle",
                "amount":9000,
                "id":"needle",
                ]),
       "柳叶飞刀": ([
                "local":"/open/killer/obj/knief2",
                "amount":6500,
                "id":"yar",
                ]),
       "铁菱子": ([
                "local":"/open/killer/obj/knief3",
                "amount":6500,
                "id":"iron",
                ]),

        "流星锥":([
                "local":"/open/killer/obj/lustar",
                "amount": 5000,
                "id":"star",
                ]),
        ]));
	setup();
ob=carry_object("/open/killer/obj/hate_knife");
	ob->add_amount(150);
	ob->wield();
}

void init()
{
	add_action("do_list","list");
	add_action("do_report","report");
}
int do_list(object me)
{
	string *name;
	int i;
        me=this_player();
        name=keys(query("list"));
	tell_object(this_player(),"目前兵器库的武器数量：\n");
	for(i=0;i<sizeof(name);i++)
        tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/amount")));
	return 1;
}
int do_report(string weapon)
{
	object ob;
        ob=this_player();
	if(this_player()->query("class")!="killer")
	{
		command("say 抱歉 ! 这里的武器属于本组织。\n");
		return 1;
	}
	if(!query("list/"+weapon))
	{
		command("say 你想要什么武器 ?\n");
		return 1;
	}
	if(present(query("list/"+weapon+"/id"),this_player()))
	{
		command("say 武器用完再来拿。\n");
		return 1;
	}
	if(query("list/"+weapon+"/amount")<=0)
	{
		command("say 这样武器现在缺货。\n");
		return 1;
	}
    if(query("list/"+weapon+"/id")=="star")
    {
      if (ob->query("combat_exp")<=120000)
      {
         command("say 你的经验值不够格来向我拿流星锥。\n");
         return 0;
      }
    }
   if(query("list/"+weapon+"/id")=="yar")
   {
      if (ob->query("combat_exp")<=40000)
      {
         command("say 你的经验值不够格来向我拿柳叶飞刀。\n");
         return 0;
      }
   }
   if(query("list/"+weapon+"/id")=="iron")
    {
      if (ob->query("combat_exp")<=70000)
      {
         command("say 你的经验值不够格来向我拿铁菱子。\n");
         return 0;
      }
    }


// 关键武器，不准申请   87.10.24 by wataru 
//        if( query("list/"+weapon+"/id")=="hate")
//        {
//          if (ob->query("combat_exp")<=1200000) 
//因为千古恨很强，所以至少要一百万以上
//          {
//            command("say 想拿千古恨,经验值练够了再来吧!\n");
//                return 0;
//          }
//        } 
	ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(249);
        add("list/"+weapon+"/amount",-250);
	ob->move(this_player());
	ob->set("no_drop",1);
	ob->set("no_give",1);
	ob->set("no_sell",1);
	message_vision( "$N拿给$n一些"+ob->name()+"\n",this_object(),this_player());
	return 1;
}
