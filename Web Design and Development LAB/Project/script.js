myApp = angular.module('myApp',[])

myApp.controller('userListCtrl',function($scope){
    $scope.users=[        {name:"User 1",avatar:"https://source.unsplash.com/random/200x200?sig=1"},    ];
    
    for(var i=2;i<21;i++)
    {
        $scope.users.push({name:`User ${i}`,avatar:`https://source.unsplash.com/random/200x200?sig=${i}`});
    };
}
);
myApp.controller('senderListCtrl',function($scope){
    $scope.users=[        {name:"User 1",avatar:"https://source.unsplash.com/random/200x200?sig=1"},    ];
    
    for(var i=2;i<21;i++)
    {
        $scope.users.push({name:`User ${i}`,avatar:`https://source.unsplash.com/random/200x200?sig=${i}`});
    };
}
);