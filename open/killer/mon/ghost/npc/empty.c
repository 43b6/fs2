inherit NPC;
 
void create()
{
   set_name("空空和尚", ({"empty monk","monk"}));
   set("race", "人类");
   set("age",70);
   set("long","在杀手墓园超渡亡魂的和尚, 一身绝艺, 高深莫测。\n");
   set("str",55);
   set("cps",50);
   set("kar",50);
   set("spi",50);
   set("int",50);
   set("cor",50);
   set("con",50);
   set("limbs", ({"头部", "胸部", "腿部", "手臂", "臀部", "脚趾"}) );
   set("verbs", ({ "bite", "claw"}));
 
   set("attitude","herosim");
   set("combat_exp",650000);
   set("force_factor", 12);
   set("max_kee",3000);
   set("kee",3000);
   set("max_force",2000);
   set("force",2000);
  set("max_gin",1500);
  set("gin",1500);
  set("max_sen",1500);
  set("sen",1500);

   set_skill("force", 80);
   set_skill("dodge", 200);
   set_skill("blackforce", 80);
   set_skill("ghost-steps", 80);

   map_skill("force", "blackforce");
   map_skill("dodge", "ghost-steps");
 
   set("chat_chance",10);
   set("chat_msg", ({
   (: this_object(), "random_move" :),
" 空空和尚唱道: 天也空, 地也空, 人生渺渺在其中;\n
                日也空, 月也空, 东升西坠为谁功?\n
                金也空, 银也空, 死后何曾在手中!\n
                妻也空, 子也空, 黄泉路上不相逢!\n
                权也空, 名也空, 转眼荒郊土一封!\n",
" 空空和尚吟道: 菩提本无树, 明敬亦非台;\n
                本来无一物, 何处惹尘埃。\n",
        }));

   setup();
}


