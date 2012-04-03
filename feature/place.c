#include <ansi.h>
#define MAX_USER_SET 20
#define MAX_WIZ_SET 50

mapping places;

int set_place(object room,int num);
int delete_place(int num);
string query_place(int num,string what);
mapping query_all_place();
mixed p_query( mapping map, string *parts );
int p_delete( mapping map, string *parts );
mixed p_set( mapping map, string *parts, mixed value );

int set_place(object room,int num)
{
    int i;
    string file_name,name,index,prop;

    if(!mapp(places)) places=([]);
    if(wizardp(this_object()))
      if(sizeof(places) >= MAX_WIZ_SET)
        return notify_fail("���趨��place̫����, ����ɾ��һЩ����Ҫ��place!!\n");
    else
      if(sizeof(places) >= MAX_USER_SET)
        return notify_fail("���趨��place̫����, ����ɾ��һЩ����Ҫ��place!!\n");
    file_name=base_name(room);
    name=room->query("short");
    index=sprintf("%d",num);
    prop=index+"/file_name";
    if(!p_set(places, explode(prop, "/"), file_name )){
      tell_object(this_object(),"�趨ʧ�ܡ�\n");
      return 1;
    }
    prop=index+"/name";
    if(!p_set(places, explode(prop, "/"), name)){
      tell_object(this_object(),"�趨ʧ�ܡ�\n");
      return 1;
    }
    tell_object(this_object(),"���趨����Ϊ��Ĵ��͵㡣\n");
    return 1;
}
int delete_place(int num)
{
    int total;
    string txt,index,prop,forward_index,forward_prop;
    if(!mapp(places))
      return notify_fail("�㲢û���趨place!!\n");
    index=sprintf("%d",num);
    if(undefinedp(places[index]))
    {
      txt=sprintf("�㲢û���趨��ŵ� %d �ŵ�places!!\n",num+1);
      return notify_fail(txt);
    }
    txt=sprintf("ɾ���� %d ��places:\n",num+1);
    prop=index+"/name";
    txt+=sprintf("����: %s \n",p_query(places,explode(prop,"/")));
    if(wizardp(this_object())){
      prop=index+"/file_name";
      txt+=sprintf("����: %s \n",p_query(places,explode(prop,"/")));
    }
    total=sizeof(places)-1;
    map_delete(places,index);
    if(num != total){
      while(1){
        num++;
        forward_index=sprintf("%d",num);
        if(undefinedp(places[forward_index])){
          map_delete(places,index);
          break;
        }
        else{
          forward_prop=forward_index+"/name";
          prop=index+"/name";
          p_set(places, explode(prop, "/"),
            p_query(places,explode(forward_prop,"/")));
          forward_prop=forward_index+"/file_name";
          prop=index+"/file_name";
          p_set(places, explode(prop, "/"),
          p_query(places,explode(forward_prop,"/")));
          index=forward_index;
        }
      }
    }
    txt+="ok.\n";
    tell_object(this_object(),txt);
    return 1;
}
string query_place(int num,string what)
{
    string index,prop;
    index=sprintf("%d",num);
    prop=index+"/"+what;
    if(p_query(places,explode(prop,"/")))
      return p_query(places,explode(prop,"/"));
    else
      return 0;
}
mapping query_all_place()
{
    return places;
}
mixed p_query( mapping map, string *parts )
{
        mixed value;
        int i, s;

        value = map;
        s = sizeof( parts );
        for( i = 0 ; i < s ; i++ ) {
                if( undefinedp( value = value[parts[i]] ) )
                        break;
                if( !mapp( value ) )
                        break;
        }
        return value;
}

int p_delete( mapping map, string *parts )
{
        if( sizeof( parts ) == 1 ) {
                map_delete( map, parts[0] );
                return 1;
        }
        if( !map[parts[0]] || !mapp( map[parts[0]] ) )
                return 0;
        return p_delete( map[parts[0]], parts[1..sizeof(parts)-1] );
}

mixed p_set( mapping map, string *parts, mixed value )
{
        if( sizeof( parts ) == 1 )
                return map[parts[0]] = value;

        if( !map[parts[0]] || !mapp( map[parts[0]] ) )
                map[parts[0]] = ([ parts[1] : 0 ]);

        return p_set( map[parts[0]], parts[1..sizeof(parts)-1], value );
}
