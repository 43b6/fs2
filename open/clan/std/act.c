/*.
1.�ƶ�: �������������,�ƶ���ĳЩ����ȥ.
2.����һ��·:������һЩ�Ժ�,������һ��·.
3.����һֻmob:���˶����Ժ�,�ܳ�һֻmob ����.
4.�ҵ�����:������Щ�����Ժ�,���϶���һ������.
                    make by avgirl 00/06/28
*/
/*���Ӽ����ɵĹ���                  *
 *               by avgirl 00/09/06   */

inherit ROOM;

int action_move(string,string);
int link_way(string arg,string opt);
int type(string verb,string ftype);
int add_mob(string arg,string opt);
int find_obj(string arg,string opt);
object env;
void init()
{
int dof;
mapping dom;

     env = environment(this_player());
        dof = sizeof(env->query("action"));

        if(dof != 0) {
                dom = env->query("action");
                add_action("action", keys(dom));
        }
}
int action(string arg)
{
        string keyword,verb,type,err_msg,check_ob,clan,*ally;
        object obj;
        int check_clan;


        verb = query_verb();
        keyword = env->query("action/"+verb+"/keyword");
        type = env->query("action/"+verb+"/type");
        err_msg = env->query("action/"+verb+"/err_msg");
        check_ob = env->query("action/"+verb+"/check_ob");
        check_clan = env->query("action/"+verb+"/check_clan");
        sscanf(base_name(env),"/open/clan/%s/%*s",clan);
        ally = CLAN_D->clan_query( this_player()->query("clan/id"), "ally" );

         if(!env->query("action/"+verb+"/filename")&& env->query("action/"+verb+"/filename")=="")
                return notify_fail("���ָ����δ��ɡ�\n");
        if(!type) return notify_fail("���ָ����δ��ɡ�\n");

// ����Ǽ����ɵĲ���.
        switch(check_clan){
// 1ʱ..�ͷǱ���Ĳ���ʹ��...        
        case 1:
        if(this_player()->query("clan/id") != clan)
                return 0;
        break;
// 2.��ͬ�˰�Ĳ���ʹ��.
        case 2:
        if(member_array( clan, ally ) == -1 && 
           this_player()->query("clan/id") != clan)
                return 0;
        default:
        }


        
        if(arg && keyword=="") return notify_fail(err_msg+"\n");  
        else if(keyword != "" && (!arg || arg != keyword)) return notify_fail(err_msg+"\n");
        if(check_ob && !obj=present(check_ob,this_player()))
                return notify_fail(err_msg+"\n");
        if(obj) destruct(obj);

        type(verb,"action");
return 1;
}

int type(string verb,string ftype)
{
        string type,filename,check;
        type = env->query(ftype+"/"+verb+"/type");
        filename  = env->query(ftype+"/"+verb+"/filename"); 
//�����Ƿ����׼��
// ֻ�����ɵ�����,������������򲻸�inherit...
       if(filename!="" && sscanf(filename,"/open/clan/%s/%*s",check)!=2){
        log_file("clan/move_bug",sprintf("[%s] %s(%s)�ķ��� filename Ϊ %s\n",
            ctime(time()),
                        this_player()->name(),
                        getuid(this_player()),
filename,
        base_name(env)));
                return 0;
        }
// �����Ǽ�������һ�ֵ��ƶ�,���л�..֮���..
// �����Ժ��и��ֵ�fun...

        switch(type){

        case "action_move":
                action_move(ftype,verb);
        break;

        case "link_way":
                link_way(ftype,verb);
        break;

        case "add_mob":
                add_mob(ftype,verb);
        break;

        case "find_obj":
                find_obj(ftype,verb);
        break;

        }
        return 1;


}

int action_move(string arg,string opt)
{

/*
��Ҫ4����Ҫ������:
1.ʹ�ú���������.(msg)
2.�ƶ�ǰ��䷿�俴�ĵ�������.(before_msg)
3.�ɶ���÷���������������.(later_msg)
4.�ƶ����ķ���ĵ���.(filename)
*/
        string msg, before_msg, later_msg, filename;

        filename = env->query(arg+"/"+opt+"/filename");
        msg = env->query(arg+"/"+opt+"/msg");
        before_msg = env->query(arg+"/"+opt+"/before_msg");
        later_msg = env->query(arg+"/"+opt+"/later_msg");

//        seteuid(getuid());
        tell_object( this_player() , msg+"\n" );

// ��ʾѶϢ...
        message_vision( before_msg+"\n" , this_player() );

// �����Ƶ��·���...
        this_player()->move(filename);

// ��ʾѶϢ...
        message_vision( later_msg+"\n" , this_player() );
        return 1;
}
int link_way(string arg,string opt)
{
/*
��Ҫ5����Ҫ��:
1.������������,(msg)
2.ʹ�ú�,���ֵ�����,(before_msg)
3.��������ķ���,һ�������ԭ�еķ����ظ���.(path)
4.���᷿���file.(filename)
5.�ر�����ʱ������.(later_msg)
ps.����·������ʱ����60��.
*/
        string msg, before_msg, path, filename;
        filename = env->query(arg+"/"+opt+"/filename");
        msg = env->query(arg+"/"+opt+"/msg");
        before_msg = env->query(arg+"/"+opt+"/before_msg");
        path = env->query(arg+"/"+opt+"/path");

// �����Ծ�����һ��·���һ�������,�Ͳ��ܿ���..
        if(env->query("exits/"+path) &&
           env->query_temp("exits/"+path)) {
           write("·�Ѿ����ˡ�\n");
           return 0;
           }

// ��ʾѶϢ
        tell_object( this_player() , msg+"\n" );
        message_vision( before_msg+"\n" , this_player() );

// �ݴ淿���¼..
        set_temp("exits/"+path,env->query("exits/"+path));

// ��ʼ���ӷ���....
        set("exits/"+path,filename);

// ������60��ر���߳���..
        call_out("remove_link",60,arg,opt);
return 1;
}
int remove_link(string arg,string opt)
{
        string path, later_msg;

        later_msg = env->query(arg+"/"+opt+"/later_msg");
        path = env->query(arg+"/"+opt+"/path");

// ��ʾѶϢ
       tell_room(env,later_msg+"\n");

// ɾ�������ĳ���...
        delete("exits/"+path);

// ����ԭ�ȳ��ڵĻ�,�ָ�ԭ�ȵĳ���...
        if(env->query_temp("exits/"+path)){
        env->set("exits/"+path,env->query_temp("exits/"+path));
        }

// ɾ����¼
        delete_temp("exits/"+path);
        return 1;
}
int add_mob(string arg,string opt)
{
/*
��Ҫ���¼�������:
1.������������,(msg)
2.ʹ�ú�,�������������������,(before_msg)
3.�л�mob �ĵ���,(filename)
4.�л���,���Կ���������(later_msg)
*/
        object mob;
        mapping ob_list;
        string msg, before_msg, later_msg, filename;

        ob_list=query_temp("clan_objects");
        filename = env->query(arg+"/"+opt+"/filename");
        msg = env->query(arg+"/"+opt+"/msg");
        before_msg = env->query(arg+"/"+opt+"/before_msg");
        later_msg = env->query(arg+"/"+opt+"/later_msg");

// ������趨������л�����,�Ͳ����ڳ�����.(ps.�����Ͽ���.)
// �����������󽫻�����set_temp("object")��������������ڽ�.

        mob=new(filename);

// �趨�����ظ��õĲ���..
        if(ob_list){
 if(ob_list[filename] || !objectp(ob_list[filename])){
        destruct(mob);
        write(env->query("action/"+opt+"/err_msg")+"\n");
                return 1;
        }
        ob_list +=  ([filename:mob]) ;
        } else ob_list =  ([filename:mob]) ;

// ��ʾѶϢ
        tell_object( this_player() , msg+"\n" );
        message_vision( before_msg+"\n" , this_player() ,mob);

// ��mob �Ƶ���ķ���ȥ...
        mob->move(env);
        env->set_temp("clan_objects",ob_list);

// ��ʾѶϢ
        message_vision( later_msg+"\n" , this_player() ,mob);
        return 1;
}


int find_obj(string arg,string opt)
{
/*
��Ҫ���¼�������:
1.������������,(msg)
2.��ָ���,�������������������,(before_msg)
3.�õ���Ʒ�ĵ���,(filename)
4.�õ���,���Կ���������(later_msg)
*/
        object mob;
        mapping ob_list;
        string msg, before_msg, later_msg, filename;

        ob_list=query_temp("clan_objects");
        filename = env->query(arg+"/"+opt+"/filename");
        msg = env->query(arg+"/"+opt+"/msg");
        before_msg = env->query(arg+"/"+opt+"/before_msg");
        later_msg = env->query(arg+"/"+opt+"/later_msg");

// ������趨������ù���,�Ͳ����ڳ�����.(ps.�����Ͽ���.)
// �����������󽫻�����set_temp("object")��������������ڽ�.


// �趨�����ظ��õĲ���..
        mob=new(filename);

        if(ob_list){
        if(ob_list[filename] || !objectp(ob_list[filename])){
                destruct(mob);
                        write(env->query("action/"+opt+"/err_msg")+"\n");
                return 1;
        }
                ob_list +=  ([filename:mob]) ;
        } else ob_list =  ([filename:mob]) ;


// ����ѶϢ...
        tell_object( this_player() , msg+"\n" );
        message_vision( before_msg+"\n" , this_player() ,mob);

// ��item �Ƶ��������..

        mob->move(this_player());
        env->set_temp("clan_objects",ob_list);

// ��ʾѶϢ...
        message_vision( later_msg+"\n" , this_player() ,mob );
        return 1;
}
void reset()
{
::reset();
// ��������ʱ��,ɾ������ȡ����temp...
   this_object()->delete_temp("clan_objects");
}
