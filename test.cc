void GraphApp::MSTPrim() {                          
    if (kWeighted && kUndirected) {                
        ...
        clearVisited();                           
        ...  // MST calculation
    } else {                                      
        cout << "Feature not enabled!" << endl;    
    }
}
