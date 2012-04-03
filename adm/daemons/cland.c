// cland.c
//
//      �ҵĽ������� save() & restore() �ķ���, �����а��ɵ�����
//      ���� query_save_file() ��
//
//                                                      Created by Arthur
//
//      ��Ҫ��ֹ��ʦ�ܸ�����, ������Ҫ��ֹ�ĵط�����, ���޶�ֻ�� ROOT_UID ���Ը�
//      if( previous_object() && geteuid(previous_object()) != ROOT_UID )
//              return;
// 1999 05/09 Ϊ���µ�ϵͳ���¸�д                      By  Chan

#include <clan.h>

inherit F_SAVE;

int check_last_num(string,string,string);

mapping clans;
                        // Ŀǰ���ݶ���Щ����, �������ж���, ���м��µ�,
                        // Ҳ���������, �����ȽϺ����
                        // clans["���ɵ� id"] = ([
                        //      "gold"          : Ǯ,
                        //      "members"       : ({ ���� id �� array }),
                        //      "master"        : ������ id,
                        //      "name"          : ��������,
                        //      "level2"        : ({ array }),
                        //      "level3"        : ({ array }),
                        //      "level4"        : ({ array }),
                        //      "home"          : ���ɵļ�,
                        //      "develop"       : �����˲ķ�չ״��,
                        //      "weapon"        : ����������չ״��,
                        //      "war"           : ����ս��״̬,
                        //      "tax"           : ˰��
                        //      "alert"         : ���䡢��ս״̬
                        //      "ally"          : ͬ��,
                        //      ]);

string *LEVEL   = ({ "level2", "level3", "level4" });

mapping query_clans()   { return clans; }
string query_save_file() { return DATA_DIR + "clan"; }

// �����Ӽ� clan ��Ǯ
int add_money(string clan_id, int num)
{

       if( !mapp(clans[clan_id]) )
                return notify_fail("û��������ɡ�\n");
        clans[clan_id]["gold"] += num;
        return num;
}

// �����Ӽ�ĳֵ by Chan
int add_clanset(string clan_id,string what,int num)
{
        if( !mapp(clans[clan_id]) )
                return notify_fail("û��������ɡ�\n");
        clans[clan_id][what] += num;
        return num;
}

// ���µ� clan, master �ǰ��� id,
int create_clan(string master, string clan_id, string clanname)
{

        int i;
        string npc_path,clannumber,clanename;
        if( mapp(clans) && mapp(clans[clan_id]))
                return 0;
        clans[clan_id] = ([
                "master"        : master,
                "name"          : clanname,
                "level2"        : ({}),
                "level3"        : ({}),
                "level4"        : ({}),
                "home"          : CLAN_HOME+clan_id+"/room/hall.c",
                "gold"          : 1000000,
                "members"       : ({ master }),
                "develop"       : 0,
                "weapon"        : 0,
                "armor_tech"    : 0,
                "board"         : 1,
                "prestige"      : 10000,
                "weapon_fund"   : 0,
                "armor_fund"    : 0,
                "war"           : 0,
                "tax"           : 5,
        ]);
        // ����һ�䷿�䵱�������
        assure_file( clans[clan_id]["home"] );
        CLAN_CMDS("c_room_make")->create_room(clans[clan_id]["home"]);
//����npc��Ŀ¼
        save();
        npc_path=CLAN_HOME+clan_id+"/npc";
        mkdir(npc_path);
        npc_path=CLAN_HOME+clan_id+"/weapon";
        mkdir(npc_path);
        npc_path=CLAN_HOME+clan_id+"/armor";
        mkdir(npc_path);
        npc_path=CLAN_HOME+clan_id+"/item";
        mkdir(npc_path);
        npc_path="/log/clan/"+clan_id;
        mkdir(npc_path);

        return 1;
}

void create()
{
        seteuid(getuid());
        restore();
        // �趨ÿ�� level ����������, ������趨�ſ��Ը���
        if( !mapp(clans) )
                clans = ([]);
        clans["limit"] = ([
                "level2" : LEVEL2_NUM,
                "level3" : LEVEL3_NUM,
                "level4" : LEVEL4_NUM,
        ]);
}

// ����λ������, �������, return 0 ��ʾ������û��λ��
int clan_promote( string clan, string id, string level, int money )
{
        int i;
        if( !undefinedp(clans["limit"][level]) && sizeof(clans[clan][level]) > clans["limit"][level] -1 ) // ȷ��λ��
                return 0;
        i = sizeof(LEVEL); // ���ԭ�ȵ�λ��
        while(i--)      {
                if( member_array( id, clans[clan][LEVEL[i]]) == -1 )
                        continue;
                clans[clan][LEVEL[i]] -= ({ id });
                break;
        }
        if( level == "banish" ) { // �� id �������
                clans[clan]["members"] -= ({ id });
                clans[clan]["member_gold"] -= money;
                return 1;
        }
        if( !undefinedp(clans["limit"][level]) ) // level(2~4)
                if( undefinedp(clans[clan][level]) ) // ����� level
                        clans[clan][level] = ({ id });
                else
                        clans[clan][level] += ({ id });
        save();
        return 1;
}

int change_clan_master(string clan, string new_master)
{
        // �Ƚ��°����ľ�λַȥ��
        clan_promote(clan, new_master, "",0);
        // �趨�°���
        clans[clan]["master"] = new_master;
        return 1;
}

// �� clan ���ɵ� what �趨�� value, ������ܶ� array ��̫�ô���
mixed clan_set(string clan, string what, mixed value)
{
        if( undefinedp(clans[clan]) )
                return notify_fail("û��������ɡ�\n");
        clans[clan][what] = value;
        return value;
}

// ���� clan ���ɵ� what ֵ
// ���ӿ��Դ��ؽ׼����� by chan
mixed clan_query( string clan, string what )
{
        if(clan && what)
        return clans[clan][what];
        else
        return 0;
}

void dest_clan( string clan_id )
{
        map_delete( clans, clan_id );
        save();
}

// ���ظ���Ұ��ɵ�Ŀ¼����
string get_clan_dir( object me )
{
        if( me->query("clan/id") )
                        return CLAN_HOME + me->query("clan/id") + "/";
        return "";
}

//�������Ŀǰ������һ���ɵĵ����� by ACKY
string what_clan_area(object me)
{
        int i;
        string path;
        path = file_name(environment(me));
        if( path[0..10]=="/open/clan/" )        {
                i = 11;
                while( i++ )
                        if( path[i] == '/' )
                                return path[11..i-1];
        }
        return "NULL";
}

// ȷ����������ڵķ�����������������, return 1 �Ǹ���ҵİ��ɷ���
int is_clan_room(object me)
{
        int i;
        string file,roomdir;
        roomdir=get_clan_dir(me)+"room/";

        file    = file_name(environment(me));
        i       = strlen(file);

        while(i--)
                if( file[i] == '/' )
                        break;

        if( file[0..i] == roomdir)
                return 1;
        return 0;
}

// ����Ƿ��д˰��� by ACKY
// �� -> return 1
// �� -> return 0
int have_clan( string clan_id )
{
        mixed *file;
        file = get_dir("/open/clan/"+clan_id+"/", -1);
        if( !sizeof(file) )
                return 0;
        if( clan_id == "area" || clan_id == "std" )
                return 0;
        return 1;
}

// ������ id �Ƿ��� clan ���ɵ�һԱ, �Ǿʹ��� 1,
// ���û flag �� flag = 0, ��ǰ��ڴ��� 0
// ����� flag �� flag != 0, �ǰ��������ð��ɵ� members
// return -1 : ���û��������ɵ�����
int is_member_or_add(string clan, string id, int flag)
{
        string *member_list;

        if( undefinedp(clans[clan]) )
                return -1;
        if( !flag )
                return 0;

        if( undefinedp(clans[clan]["members"]) )
                clans[clan]["members"] = ({ id });
        else
                clans[clan]["members"] += ({ id });
        return 1;
}

int clan_data( object me, string clan_name ) //���ذ������� by ACKY
{
        string *clan_id, *clan_data, clan_str;
        int o, sum;
        clan_id = sort_array( CLAN_D->query_all_clan(), "sort_keys", this_object() );
        sum = sizeof( clan_id );
        clan_str = sprintf("ĿǰFS��%d������ -\n", sum );
        for( o=0; o<sum; o++ )
                clan_str += sprintf("[%s] ", clan_id[o] );
        clan_str += "\n";
        me->start_more( clan_str );
        clan_str = sprintf("[%s]", clan_name );
        clan_data = sort_array( keys( clans[clan_name] ), "sort_keys", this_object() );
        sum = sizeof( clan_data );
        for( o=0; o<sum; o++)
                clan_str += sprintf("[%s] %-26O\n", clan_data[o], clans[clan_name][clan_data[o]] );
        me->start_more( clan_str );
        return 1;
}

int sort_keys( string key1, string key2 ) //�������� by ACKY
{
  return strcmp( key1, key2 );
}

string *query_all_clan() //���ذ������ϵĹؼ��� by ACKY
{
        return keys(clans);
}

mapping query_all_clans() //���ذ���ȫ������ by ACKY
{
        return clans;
}
// ���ص������������....��weapon,eq,npc��Ƶ�...
// ��Ϊ���û�еĻ�,ɾ��eqʱ���ҵ�....by acky...
// path:���ɵ�Ŀ¼...
// type: "weapon/","armor/","npc/",�����ࡣ..
// name: ���ǵ���..like unarmed24,finger23
// by avgirl
int check_last_num(string path,string type,string name)
{
mixed *file;
int i, j;
mixed k=({});
// ȡ�õ���
        file = get_dir(path+type+name+"*", -1);
        if(!sizeof(file)) return 0;
// �����е����ִ�ȡ����
        for(i=0;i<sizeof(file);i++){
if(find_player("avgirl") ) tell_object(find_player("avgirl"),sprintf("���:%s\n",file[i][0]));
        sscanf(file[i][0],name+"-%d.c",j);
// �����ּӽ�k ��,���г�k=({1,2,3,4,......})
        k += ({j});
        }
if(find_player("avgirl") ) tell_object(find_player("avgirl"),sprintf("����:%O\n",k));
// �����һ����ֵ����ȥ...
 if(find_player("avgirl") ) tell_object(find_player("avgirl"),sprintf("����:%d\n",sort_array(k,1)[sizeof(k)-1]));
        return sort_array(k,1)[sizeof(k)-1];
}
// ����������item...
// by avgirl...
int list_item(object me )
{
        string *files,list,temp,dir,str,number,err;
        int i,k;

        files = get_dir(get_clan_dir(me) + "item/*.c");
        i = sizeof(files);

                if(i==0) {
                list = sprintf("����Ŀǰû���κ���������Ʒ��\n");
                write(list);
                return 1;
        }
        list = sprintf("����Ŀǰ��%s����������Ʒ��\n",CHINESE_D->chinese_number(i));
        write(list);
        for(k=1; k<i+1; k++ ) {
                number=sprintf("%d",k);
                temp = get_clan_dir(me)+"item/item-"+number+".c";
                if(file_size(temp) == -1)       {
                        str="�ݻٵ���Ʒ";
                       i++;
                }
                else {
                  err = catch(temp->query("name"));
                        if(!err)  str=temp->query("name");
                        else str="[1;31m�𻵵���Ʒ[0m";
                }
                printf("[%2d]%-20s%s", k, str, (k%2 ? "" : "\n") );
        }
    write("\n");
    return 1;
}
