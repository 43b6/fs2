void init()
{
object me,ob;
int i,j;
        me=this_player();
        if(me->query("id")!="fly-bird" && me->query("id")!="fly-worm" && me->query("id")!="fly-spider")
        {
		if( random(100) < 50 )
                if( !present("fly-bird",environment(me)) && !present("fly-worm",environment(me)) && !present("fly-spider",environment(me)))
                {
                        i=random(3)+1;
                        for(j=0;j < i ;j++)
                        {
                                ob=new(__DIR__"npc/mob"+i);
                                ob->move(environment(me));
                                message_vision("\n$N从通道的管壁外爬了进来冲向了。\n\n",ob);
                                ob->kill_ob(me);
                        }
                }
                if(random(100) > 50 )
                {
                        message_vision("通道内的强风，仿佛利器般的割伤了$N。\n",me);
                        me->receive_damage("gin",100);
                        me->receive_damage("kee",100);
                        me->receive_damage("sen",100);
                        COMBAT_D->report_status(me,1);
                }
        }
return ;
}
int valid_leave(object me,string dir)
{
        if(dir=="down")
        {
                if(present("fly-bird",environment(me)) || present("fly-worm",environment(me)) || present("fly-spider",environment(me)))
                        return notify_fail("在此地的邪灵们阻挡住了你的去路。\n");
        }
return 1;
}
