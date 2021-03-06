inherit NPC;
string do_give();
int i=1;

string do_ask (object me);

void create()
{
        set_name("纪文凤", ({ "wen fun","fun" }) );
        set("long", "
她是金刀门门主王元霸的妻子，跟王元霸是青梅竹马，也同是武林世家出
身，早年以一对鸳鸯刀另令黑道人士丧胆。
看她肌肤微丰，合中身材，腮凝新荔，鼻腻鹅脂，温柔沈默，观之可亲。
\n");
        
        set("nickname","宝刀柔情");  

        set("age", 45);
        set("int", 26);
        set("cps", 22);
        set("str", 27);
        set("cor", 27);
        set("spi", 24);
        set("con", 30);
        set("kar", 28);
        set("per", 30);
        set( "force_factor", 10 );
        set( "score", 90 );
        set("combat_exp", 400000);
        set("force",1500);
        set("max_force",1500);
        set_skill("blade", 60);
        set_skill("dodge", 75);
        set_skill("parry", 60);
        set_skill("force", 58);
        set_skill("gold-blade",60);
        set_skill("sixforce",53);
        set_skill("fly-steps",64);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");

        set("race", "人类");
        set( "gender", "女性");

        set("limbs", ({ "头部",  "双脚", "双手", "背部" ,"腹部","腰部"}) );
    
        set("attitude", "peaceful");

        set("chat_chance", 6);
        set("chat_msg", ({
        "纪文凤跪在观音大士法像前低声祈祷。\n",
        "纪文凤用略带悲伤的声音叹道：‘唉！万一云儿的病治不好那可怎么办才好。’\n",
        }) );
        set("chat_chance_combat",10);
        set("chat_msg_combat",({
        "纪文凤道：‘庄严佛堂岂容你无知小辈作乱。’\n",
        "纪文凤大喝：‘无知小辈我替上天来惩罚你。’\n",
        "纪文凤叹了口气；‘唉！你不是我的对手！’\n",
        }));
        set("inquiry",([
        "儿子" : "唉！我那可怜的儿子，看他发病时的痛苦样子实在很不忍心。\n",
        "病" :   "最近有一位西域来的圣僧他开了一药方说可以治好我云儿的病，也不知是真是假。\n",
        "药方" : "上面列了一堆奇奇怪怪的药材，大概要到皇城里的药材铺里才找得到吧！\n",
        "药材铺" : "你要帮我去抓药吗？不然问那么多做什么呢？\n",
        "无名" : "你是说我们金刀门请来的那个泥水匠阿？\n",
        "抓药" : (:do_give:)
        
        ]));        
  
        setup();

        carry_object("/u/l/longhair/gold_blade/obj/mandarin_duck-blade.c")->wield();
        add_money("gold",15);
}

string do_give()
{
        if(this_player()->query_temp("magistral"))
        return "药材呢？";
        if(i==0)
        return "我已经请人帮我跑腿去配药了。";
        new("/open/gblade/obj/magistral.c")->move(this_player());
        message_vision("纪文凤从怀中拿出一张药方签 , 交给$N \n",this_player());
        i=i-1;
        this_player()->set_temp("magistral",1);
}

