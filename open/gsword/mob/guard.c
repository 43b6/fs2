// copy from /d/snow/npc/teacher.c

inherit NPC;

void create()
{
	set_name("一位仙风道骨的老者", ({ "oldman","man"}) );
	set("gender", "男性" );
	set("age", 63);
	set("int", 26);
set("long","眼前这位老者已年近七十，但仍双眼炯炯有神，一身内力外功均趋炉火纯青之境。\n");
	set("combat_exp",5747);
        set("chat_chance_combat",6);
	set("chat_msg_combat",({
"掌门有令，任何人不得进入禁地，你们还是请回吧，\n
今日之事，我不追究就是了。否则的话，嘿嘿，别怪我手下无情。\n"}));
        set("max_kee",500);
        set("max_gin",500);                        
	set("attitude","aggressvie");
	set_skill("unarmed",50);
	set_skill("parry",50);
	set_skill("force",50);
	setup();
   }

