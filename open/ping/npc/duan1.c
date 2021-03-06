// 段家 门人 made by onion
#include <ansi.h>
#include </open/open.h>
inherit NPC;
string do_story();
string do_give();
object me=this_player();
void create()
{
	set_name("柳毅风",({"liu"}));
	set("long","柳毅风是段云的大弟子, 近年来段家的事大约都是由他经手的, "+
    "才智与武功均属上等, 为人也谦逊有理, 因此段云早想将掌门之位相传了。\n");
	set("gender","男性");
	set("class","scholar");
	set("combat_exp", 300000);
	set("attitude","heroism");
	set("age",45);
	set("inquiry",([
	"左正" : "左正与张冰都是段家挂名的子弟, 这次他们遇上的难题, 便向我们段家求救了",
	"张冰" : "左正与张冰都是段家挂名的子弟, 这次他们遇上的难题, 便向我们段家求救了",
	"sad_story" : (: do_story :),
	"一阳心法秘笈" : (: do_give :),
	]));
	set("force",1500);
	set("max_force",1500);
	set("force_factor", 5);
	set_skill("force",50);
	set_skill("stabber",80);
	set_skill("unarmed",60);
	set_skill("dodge",60);
	set_skill("sunforce",60);
	set_skill("linpo-steps",60);
	set_skill("six-fingers",90);
	map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
	map_skill("parry","six-fingers");
	map_skill("stabber","six-fingers");
	map_skill("unarmed","six-fingers");
	set_temp("apply/dodge",100);
	set("chat_chance_combat", 20);
	set("chat_msg_combat", ({
		(: perform_action("stabber.handwriting") :),
	}));
	setup();
	carry_object(PING_OBJ"fan1")->wield();
	add_money("silver",50);
	create_family("段家",11,"弟子");
}

string do_story()
{
    me=this_player();
    if( (int)me->query_temp("thief") >= 4)
	{
	me->set_temp("thief",5);
	command("say 师父的往事吗..其实只有一件事令师父颇为伤心...");
	return ("在二十几年前, 二师弟赵琴风(chao)正是位英俊少年, 也颇得师父欢心, "+
		"只是二师弟年少轻狂、少不更事, 竟然一时把持不住, 受云南的妖女所惑"+
		"盗走了六脉神剑的剑谱, 是后虽然二师弟良心发现, 将剑谱追回, 但碍于"+
		"门规, 师父也只好忍痛将二师弟逐出师门, 唉....\n\n"+
		"柳毅风停了一会后说道: 请转告师父说, 要面对现实了"); 
	}
	else
	  return("伤心..没有你伤心..伤心..没有你伤心\n\n柳毅风在大庭广众下就唱了起来..哇勒\n");
}

string do_give()
{
	object note;
	if( me->query("family/family_name") == "段家" )
	{
	  if( present("sunforce note",me) )
		return ("你身上不是已经有一本了吗？\n");
	  else{
		note=new(PING_OBJ"sunforce_note");
		if( !note->move(me) )
			note->move(environment(me));
		return ("这本秘笈中记载了一阳心法的一个密招, 是我费尽千辛万苦才寻回"+
		"来的, 这就麻烦师弟一趟, 帮我把这本秘笈交至师父手上了。\n");
	  }
	}
	else
	{
	  command("? "+getuid(me));
	  return ("这好像不关你的事喔。");
	}
}	

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;

        if(!winner)
	{
	::die();
	return ;
        }

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj8/bamboo_wind")->move(environment(winner));
	  message_vision(HIM"\n从柳毅风的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/bamboo_wind",sprintf("%s(%s) 让柳毅风掉下了竹傲风于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/bamboo_wind")->move(environment(winner));
	  message_vision(HIM"\n从柳毅风的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/bamboo_wind",sprintf("%s(%s) 让柳毅风掉下了竹傲风于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

